/*

GameBoy-Run
FOR GAMEBOY

&copy 2021 ByeMC

Contributors: 

ByeMC
[[ ADD YOUR NAME HERE, IF YOU CONRIBUTED TO THIS FILE ]]


*/

#include <gb/gb.h> // don't worry if this produces errors, it will compile anyway
#include "helloWorld.c"

void init();
void checkInput();
void updateSwitches();

void main() {

	init();
	
	while(1) {
		
		checkInput();				// Check for user input (and act on it)
		updateSwitches();			// Make sure the SHOW_SPRITES and SHOW_BKG switches are on each loop
		wait_vbl_done();			// Wait until VBLANK to avoid corrupting memory
	}
	
}

void init() {
	
	DISPLAY_ON;						// Turn on the display
	
	// Use the 'helloWorld' array to write background tiles starting at 0,6 (tile positions)
	//  and write for 10 tiles in width and 2 tiles in height
	set_bkg_tiles(0,6,10,2,helloWorld);			

}

void updateSwitches() {
	
	HIDE_WIN;
	SHOW_SPRITES;
	SHOW_BKG;
	
}

void checkInput() {

    if (joypad() & J_B) {
		// The B button was pressed!
    }

}
