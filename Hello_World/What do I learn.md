# 1.如何使用CMake和GCC/G++编译项目
## 1.1CMake注意事项
1. CMake可以快速生成MakeFile，以便在不同的平台上进行Make编译。
2. CMake本身不能直接编译项目，需要配合GCC/G++等编译器使用。
3. CMake生成MakeFile有几点注意，首先，独立的运行在Linux下的CMake默认调运Unix Makefiles，调用的是GCC/G++等编译器；其次，如果需要使用VSCode中的插件CMake，**则需在配置文件（.vscode/settings.json）中指定编译器，否则会自动调用VSCode默认的编译器 NINJA，进而报错**。
P.S. 配置文件可调整仅项目，工作区，用户（全局）/当前设置。
4. 想要使用VSCode中的UI快捷MakeFile，**需正确规范CMakeLists.txt文件（特别注意指定编译器和源码位置），否则会先生成setting.json(主要问题为未指定源码位置),再次点击才能正常build**。
5. 推荐项目结构 
**Project/
│── CMakeLists.txt
│── build/
│── src/
│   └── main.cpp**
## 1.2 GCC/G++注意事项
1. GCC/G++是GNU Compiler Collection的一部分，用于编译C/C++代码。
2. 可以在终端中直接输入gcc/g++命令编译代码，也可以在VSCode中使用插件CMake进行编译。
3. 编译时需要指定源文件（.cpp/.c）和输出文件（-o 选项），例如：gcc -o output source.cpp
## 1.3如何编译项目
### 1.3.1 使用独立安装的CMake，使用命令操作
- 先新建一个build文件夹，并进入该文件夹（**mkdir build && cd build**）
- 确认CMakeLists.txt在build的上级目录（**../CMakeLists.txt）P.S.方便输命令
- 在build文件夹中运行cmake命令（**cmake ..**）生成MakeFile
- 再行make命令（**make**）编译项目
### 1.3.2 使用VSCode中的插件CMake，使用UI操作
#### 1.3.2.1 分步操作
- `Ctrl + Shift + P`输入`CMake: Configure`，(已设置为自动模式，自动在项目根目录下生成build文件夹)，选择CMakeLists.txt文件，生成MakeFile
- `Ctrl + Shift + P`输入`CMake: Build`，编译项目（生成可执行文件）
#### 1.3.2.2 一次操作
- `Ctrl + Shift + P`输入`CMake: Build`，直接编译项目（生成可执行文件）——等同于点击左下角的**生成（Build）按钮**
特别注意 **生成（Build）按钮** 有智能检测，如下

| 当前状态                                 | VSCode “生成 / Build” 按钮执行的动作   | 等价命令                                                          |
| ------------------------------------ | ----------------------------- | ------------------------------------------------------------- |
| **还没有 Makefile / build.ninja**（首次构建） | 自动执行 **Configure + Build** 两步 | `cmake -B build -S . && cmake --build build`                  |
| **已经存在 Makefile / build.ninja**（构建过） | 只执行 **Build**                 | `cmake --build build`（等价于 `make -C build` 或 `ninja -C build`） |
- 使用快捷键 `Ctrl + Shift + B` 也可以直接编译项目（生成可执行文件）——等同于点击左下角的**生成（Build）按钮**
**特别注意 该操作需提前在.vscode中配置tasks.JSON**
## 1.4运行可执行文件
### 1.4.1 直接在终端运行
- 在build文件夹中运行可执行文件（**./the name of the executable file**）
### 1.4.2 使用UI操作
- `Ctrl + Shift + P`输入`CMake: Run`，运行项目（生成可执行文件）——等同于点击左下角的**运行（Run）按钮**
**特别注意 该操作会自动重新build，会产生新文件！！**
- `Ctrl + Shift + P`输入`Tasks: Run Task`，（**已配置全局快捷键 `ALT+T`**），选择需要运行的项目
**特别注意 该操作需提前在.vscode中配置tasks.JSON，且该操作不会产生新文件！！**
以本项目为例的task.json
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "HelloWorld",
      "type": "shell",
      "command": "${workspaceFolder}/build/HelloWorld",
      "group": {
        "kind": "test",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}
```
- 直接点击**运行（Run）按钮**，即可自动编译并运行项目
## 1.5 更多相关信息及文件配置示例
- **https://chatgpt.com/c/68f5c1c9-1344-8325-85c8-b82dc82dd123**