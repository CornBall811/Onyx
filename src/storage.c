#include <stdio.h>
#include "player.h"

#define SAVE_PATH "saves/player.bin"

void saveGame(Player *p) {
	// wb means write binary btw
	FILE *f = fopen(SAVE_PATH, "wb");
	if (f == NULL) {
		// maybe later print an error to ncurses log here
		return;
	}

	fwrite(p, sizeof(Player), 1, f);
	fclose(f);
}

void loadGame(Player *p) {
	// and rb means read binary if you couldn't figure that out yourself
	FILE *f = fopen(SAVE_PATH, "rb");
	if (f == NULL) {
		return; // No save file found (can also throw errors to log)
	}

	fread(p, sizeof(Player), 1, f);
	fclose(f);
}
