#include<iostream>
#include<cstdlib>
#include<windows.h>
int main()
{
	system("echo 欢迎使用Steam安装助手(名字跟盗版Steam有得一拼)");
	system("echo 本项目的初衷是帮助赛博文盲安装Steam");
	system("echo 为了省事直接用命令调用Invoke-WebRequest下载安装程序了QwQ");
	Sleep(10000);

	system("powershell mkdir DownloadFile");
	system("powershell Invoke-WebRequest -Uri https://github.com/BeyondDimension/SteamTools/releases/download/3.0.0-rc.8/Steam++_v3.0.0-rc.8_win_x64.exe -OutFile DownloadFile/Steam++.exe\n");
	system("powershell Invoke-WebRequest -Uri https://media.st.dl.eccdnx.com/client/installer/SteamSetup.exe -OutFile DownloadFile/SteamSetup.exe\n");
	system("powershell .\\DownloadFile/Steam++.exe");
	system("powershell .\\DownloadFile/SteamSetup.exe");
	system("echo 安装程序即将退出");
	Sleep(10000);
}