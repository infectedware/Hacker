$url  = 'https://raw.githubusercontent.com/infectedware/Hacker/main/bomb.mp3'
$file = Join-Path $env:TEMP 'bomb.mp3'
Invoke-WebRequest -Uri $url -OutFile $file
Add-Type 'using System.Runtime.InteropServices; public class M { [DllImport("winmm.dll", CharSet=CharSet.Auto)] public static extern int mciSendString(string c, System.Text.StringBuilder r, int l, System.IntPtr h); }'
[M]::mciSendString("open `"$file`" type mpegvideo alias s", $null, 0, [IntPtr]::Zero)
[M]::mciSendString("play s", $null, 0, [IntPtr]::Zero)
Start-Sleep -Seconds 10
[M]::mciSendString("close s", $null, 0, [IntPtr]::Zero)
