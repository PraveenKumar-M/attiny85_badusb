#include "DigiKeyboard.h"

vold setup() {

	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(2000);
	
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); 
	DigiKeyboard.delay(2000);

	DigiKeyboard.print("cmd"); 	
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(KEY_ENTER); 
	DigiKeyboard.delay(2000);

	DigiKeyboard.print("xsetroot -solid black"); 
	DigiKeyboard.sendKeyStroke(KEY_ENTER); 	
	DigiKeyboard.delay(2000);	

	DigiKeyboard.print("hollywood"); 		
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(,  | );        


	DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_ALT_LEFT | KEY_T);        
	DigiKeyboard.delay(2000);
	DigiKeyboard.print("firefox -new-tab http://geektyper.com/scp/ & xdotool search --sync --onlyvisible --class "Firefox" windowactivate key F11 "); 
	
	for(int i=0; 1<200;i++)
		DigiKeyboard.sendKeyStroke(KEY_A);        
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(KEY_1);        
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_2);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_3);        
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_4);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_5);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_6);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_7);        		
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_8);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_9);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_0);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(MOD_SHIFT_RIGHT);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_HOME);        	
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_END);        		
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_TAB);        		
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(KEY_ESC);        	
	DigiKeyboard.delay(4000);
	DigiKeyboard.sendKeyStroke(MOD_CONTRO_LEFT, KEY_W);        	


	DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_ALT_LEFT | KEY_T);        
	DigiKeyboard.delay(2000);
	DigiKeyboard.print("mplayer -fs -loop 0 file"); 	
}


void loop() {

}
