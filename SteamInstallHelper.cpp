#include<iostream>
#include<cstdlib>
#include<windows.h>
int main()
{
	system("echo ��ӭʹ��Steam��װ����(���ָ�����Steam�е�һƴ)");
	system("echo ����Ŀ�ĳ����ǰ���������ä��װSteam");
	system("echo Ϊ��ʡ��ֱ�����������Invoke-WebRequest���ذ�װ������QwQ");
	Sleep(10000);

	system("powershell mkdir DownloadFile");
	system("powershell Invoke-WebRequest -Uri https://github.com/BeyondDimension/SteamTools/releases/download/3.0.0-rc.8/Steam++_v3.0.0-rc.8_win_x64.exe -OutFile DownloadFile/Steam++.exe\n");
	system("powershell Invoke-WebRequest -Uri https://media.st.dl.eccdnx.com/client/installer/SteamSetup.exe -OutFile DownloadFile/SteamSetup.exe\n");
	system("powershell .\\DownloadFile/Steam++.exe");
	system("powershell .\\DownloadFile/SteamSetup.exe");
	system("echo ��װ���򼴽��˳�");
	Sleep(10000);
}