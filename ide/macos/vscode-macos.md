
# Table of Contents

1.  [安装clang](#orgeed875e)
    1.  [检查是否已经安装clang](#org65134f6)
    2.  [安装clang](#org2b955e2)
2.  [下载VS Code并安装](#orgcc681af)
3.  [安装VS Code C/C++插件](#org143ef26)
4.  [添加VS Code到PATH](#org8d6a2b7)
5.  [配置VS Code的C语言编译选项](#org5cbb5ca)
    1.  [终端（命令行）下新建一个目录用于存放C的项目：](#orge44761d)
    2.  [将.vscode目录下载下来并放到这个目录下](#orgc669f34)
6.  [Hello, World](#org8a4c96c)


<a id="orgeed875e"></a>

# 安装clang


<a id="org65134f6"></a>

## 检查是否已经安装clang

终端命令行下输入： `clang --version` 

    bash-3.2$ clang --version
    Apple clang version 11.0.0 (clang-1100.0.33.16)
    Target: x86_64-apple-darwin19.2.0
    Thread model: posix
    InstalledDir: /Library/Developer/CommandLineTools/usr/bin

如果出现上面的回显，说明已经安装了clang，可以跳过本节，开始[下载VS Code并安装](#orgcc681af)。


<a id="org2b955e2"></a>

## 安装clang

-   打开终端，输入 `command xcode-select --install`; 并在弹出的窗口中选择 `install`

![img](./img/Clang-xcode-select.png)

-   接下来的License Agreement对话框中选取Agree：

![img](./img/Clang-License-Agreement.png)

-   出现下载和安装的界面：

![img](./img/Clang-Installing-Software.png)

-   安装完成后点击Done：

![img](./img/Clang-Installed.png)

-   确认安装完成：

![img](./img/Clang-Check-version.png)


<a id="orgcc681af"></a>

# 下载VS Code并安装

[下载链接](https://code.visualstudio.com/download)

选择mac os版本下载并安装


<a id="org143ef26"></a>

# 安装VS Code C/C++插件

打开visual Studio Code，安装c/c++插件:

![img](./img/vs-install-plugin.png)


<a id="org8d6a2b7"></a>

# 添加VS Code到PATH

1.  打开VS code
2.  使用⇧⌘P（同时按住Shift+Command+P）打开VS code命令行
3.  输入“Shell”，从给出的建议中选择 `Shell Command: Install 'code' command in PATH` :
    
    ![img](./img/mac-command-palette-shell-command.png)

4.  应该会看到VS Code窗口的右下角出现提示：“VS Code was successfully added to the PATH”.
5.  关闭VS Code


<a id="org5cbb5ca"></a>

# 配置VS Code的C语言编译选项


<a id="orge44761d"></a>

## 终端（命令行）下新建一个目录用于存放C的项目：

    mkdir c-projects


<a id="orgc669f34"></a>

## 将.vscode目录下载下来并放到这个目录下

[.vscode目录](https://github.com/linc5403/c/tree/master/ide/macos/.vscode)

1.  在c项目目录（上一节新建的c-projects目录）下启动VS Code：
    
        cd c-projects
        code .
    
    此时应该可以出现VS的界面

2.  在VS Code中新建.vscode目录：
    
    ![img](./img/creat-img.png)

3.  选中.vscode目录, 新建文件（ `c_cpp_properties.json` `launch.json` `tasks.json` ），将github上的3个文件内容分别copy到新建的三个文件中
    
    ![img](./img/create-file-1.png)
    
    ![img](./img/create-file-2.png)
    
    ![img](./img/create-file-3.png)

4.  下载和拷贝完成后你的工作目录应该是这个样子的：
    
    ![img](./img/create-file-4.png)
    
        c-projects/
        └── .vscode
          ├── c_cpp_properties.json
          ├── launch.json
          └── tasks.json
    
    **注意** .vscode是隐藏目录，需要使用 `ls -la` 进行查看


<a id="org8a4c96c"></a>

# Hello, World

创建你的第一个C程序并运行吧：

1.  新建文件保存为hello.c，并输入如下代码：
    
        #include <stdio.h>
        
        int main(int argc, char** argv) {
            printf("Hello, world!\n");
            return 0;
        }
    
    ![img](./img/hello-code.png)
    
    **记得保存文件**

2.  使用⇧⌘B(同时按住Shift+Command+B)进行编译：
    
    ![img](./img/compile.png)

3.  终端下可以看到多出了编译出来的可执行文件：hello
    
        bash-3.2$ ls
        hello           hello.c         hello.dSYM

4.  通过 `./hello` 执行该文件
    
    ![img](./img/result.png)

