1. Install Visual Studio Code 
Download: Visit the official VS Code website and download the installer for your operating system (Windows, macOS, or Linux).
Installation: Run the downloaded file and follow the standard installation prompts. 
2. Install GCC Compiler 
VS Code is a code editor, not a compiler, so you must install GCC separately. 
Windows (via MSYS2/MinGW):
Download the MSYS2 installer from msys2.org.
Run the installer and, in the MSYS2 terminal that opens, run the following command to install the MinGW-w64 toolchain:
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain.
Set Environment Path: Search for "Edit the system environment variables" in Windows. Click Environment Variables, find Path under "System variables," click Edit, and add the bin folder path (typically C:\msys64\ucrt64\bin).
3. Configure VS Code for C
Open VS Code and click the Extensions icon (or press Ctrl+Shift+X).
Search for "C/C++" and install the extension provided by Microsoft.
(Optional) Install the "Code Runner" extension for a one-click "Run" button experience.
4. Execute Your First C Program
Create a Project Folder: Create a new folder on your computer (e.g., C_Projects) and open it in VS Code via File > Open Folder.
Create File: Click the New File icon and name it hello.c.
Write Code: Copy and paste the following simple program:
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
