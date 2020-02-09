
# Table of Contents

1.  [安装clang](#org1ac3f6f)
    1.  [检查是否已经安装clang](#org03bb495)
    2.  [安装clang](#org4bba0cf)
2.  [下载VS Code并安装](#org9990245)
3.  [安装VS Code C/C++插件](#orged327b2)
4.  [添加VS Code到PATH](#orge837b27)
5.  [配置VS Code的C语言编译选项](#org6fe9103)
6.  [Hello, World](#org0eb7551)


<a id="org1ac3f6f"></a>

# 安装clang


<a id="org03bb495"></a>

## 检查是否已经安装clang

终端命令行下输入： `clang --version` 

    bash-3.2$ clang --version
    Apple clang version 11.0.0 (clang-1100.0.33.16)
    Target: x86_64-apple-darwin19.2.0
    Thread model: posix
    InstalledDir: /Library/Developer/CommandLineTools/usr/bin

如果出现上面的回显，说明已经安装了clang，可以跳过本节，开始[下载VS Code并安装](#org9990245)。


<a id="org4bba0cf"></a>

## 安装clang

-   打开终端，输入 `command xcode-select --install`; 并在弹出的窗口中选择 `install`

![img](./img/Clang xcode-select.png)

-   接下来的License Agreement对话框中选取Agree：

![img](./img/Clang License Agreement.png)

-   出现下载和安装的界面：

![img](./img/Clang Installing Software.png)

-   安装完成后点击Done：

![img](./img/Clang Installed.png)

-   确认安装完成：

![img](./img/Clang Check version.png)


<a id="org9990245"></a>

# 下载VS Code并安装

[下载链接](https://code.visualstudio.com/download)

选择mac os版本下载并安装


<a id="orged327b2"></a>

# 安装VS Code C/C++插件

打开visual Studio Code，安装c/c++插件:

![img](./img/vs-install-plugin.png)


<a id="orge837b27"></a>

# 添加VS Code到PATH

1.  打开VS code
2.  使用⇧⌘P（同时按住Shift+Command+P）打开VS code命令行
3.  输入“Shell”，从给出的建议中选择 `Shell Command: Install 'code' command in PATH` :
    
    ![img](./img/mac-command-palette-shell-command.png)

4.  应该会看到VS Code窗口的右下角出现提示：“VS Code was successfully added to the PATH”.
5.  关闭VS Code


<a id="org6fe9103"></a>

# 配置VS Code的C语言编译选项

1.  新建一个目录用于存放C的项目：
    
        bash-3.2$ mkdir c-projects

2.  将.vscode目录下载下来并放到这个目录下
    
    [.vscode目录](https://github.com/linc5403/c/tree/master/ide/macos/.vscode)
    
    -   下载这三个文件，文件右键，选择“链接存储为“
    
    ![img](./img/save-config.png)
    
    -   例如你存储的位置为Home目录下的config-files，那么应该是这样：
    
    ![img](./img/save.png)
    
    -   命令行下进入到刚才创建好的工程目录,创建.vscode目录，然后copy下载的3个文件到.vscode目录下
        
        注意下面示例中的~config-files是你下载那3个文件的保存目录
    
        cd c-projects
        mkdir .vscode
        cp ~/config-files/c_cpp_properties.json .vscode
        cp ~/config-files/launch.json .vscode
        cp ~/config-files/tasks.json .vscode
    
    拷贝完成后，你的工程目录应该像这个样子：
    
        c-projects/
        └── .vscode
          ├── c_cpp_properties.json
          ├── launch.json
          └── tasks.json
    
    **注意** .vscode是隐藏目录，需要使用 `ls -la` 进行查看

3.  用VS Code打开这个目录
    
    就是命令行下进入c-projects目录，然后执行 `code .` 命令：
    
        bash-3.2$ cd c-projects/
        bash-3.2$ pwd
        /Users/banyuan/c-projects
        bash-3.2$ code .
    
    此时应该可以出现VS Code的界面，同时加载了c-projects目录：
    
    ![img](./img/vs-code-startup.png)


<a id="org0eb7551"></a>

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

