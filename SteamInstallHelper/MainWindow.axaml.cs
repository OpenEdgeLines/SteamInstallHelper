using System.Diagnostics;
using System.IO;
using System.Net.Http;
using Avalonia.Controls;
using Avalonia.Interactivity;

namespace SteamInstallHelper;

public partial class MainWindow : Window
{
    public MainWindow()
    {
        InitializeComponent();
    }
    public async void ButtonClicked(object source, RoutedEventArgs args)
    {
        string uuVersions = "UU-5.15.2.exe";
        string uuUrl = "https://uu.gdl.netease.com/5024/"+uuVersions;
        string steamUrl = "https://media.cdn.queniuqe.com/client/installer/SteamSetup.exe";
        string steamFilePath = Path.Combine(Directory.GetCurrentDirectory(),"SteamSetup.exe");
        string uuFilePath = Path.Combine(Directory.GetCurrentDirectory(),uuVersions);
        
        
        using var httpClient = new HttpClient();
        
        //Steam Installer Download
        await using var steamStream = await httpClient.GetStreamAsync(steamUrl);
        await using var fileStream = new FileStream(steamFilePath, FileMode.Create);
        await steamStream.CopyToAsync(fileStream);

        // UU Speeder Installer Download
        await using var uuStream = await httpClient.GetStreamAsync(uuUrl);
        await using var uuFileStream = new FileStream(uuFilePath, FileMode.Create);
        await uuStream.CopyToAsync(uuFileStream);
    }

    public void StartInstaller(object source, RoutedEventArgs args)
    {
        Process.Start("SteamSetup.exe");
        Process.Start("UU-5.15.2.exe");
    }
}