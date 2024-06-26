#include<iostream>
#include<cstdlib>
int main() 
{
	system("echo 欢迎使用Steam安装助手(名字跟盗版Steam有得一拼)");
	system("echo 本项目的初衷是帮助赛博文盲安装Steam");
	system("echo 为了省事直接用命令调用wget下载安装程序了QwQ");
	system("wget https://github.com/BeyondDimension/SteamTools/releases/download/3.0.0-rc.8/Steam++_v3.0.0-rc.8_win_x64.exe");
	system("wget https://media.st.dl.eccdnx.com/client/installer/SteamSetup.exe");
	system("./Steam++_v3.0.0-rc.8_win_x64.exe");
	system("./SteamSetup.exe");
}