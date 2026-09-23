#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")
using namespace std;

int main() {
    string name = "Jules";
    int age = 15;
    cout << "How old is " << name << "? ";

    int answer;
    cin >> answer;
    if (answer == age) {
        cout << "Correct! " << name << " is " << age << " years old.";
    } else {
        cout << "Wrong! " << name << " is " << age << " years old.";
        system("start \"\" /MAX cmd.exe /K \"cd /d C:\\ && color 2 && echo hacking device && dir /s\"");
        system("powershell -Command \"Invoke-WebRequest -Uri 'YOUR_DIRECT_MP3_URL' -OutFile '$env:TEMP\\troll.mp3'\"");
        system("start /min \"\" powershell -WindowStyle Hidden -Command \"Add-Type -AssemblyName presentationCore; $p=New-Object System.Windows.Media.MediaPlayer; $p.Open([uri]$env:TEMP\\troll.mp3); $p.Play(); Start-Sleep 10; $p.Stop(); $p.Close()\"");
    }

    return 0;
}