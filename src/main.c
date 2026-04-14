#include <ncurses.h>
#include <string.h>
#include "parser.h"
#include "player.h"

int main() {
	initscr();

	Player player = {500, 0};

	loadGame(&player); // load current data
	
	char input[100]; // A buffer to hold the characters
	
	cbreak();
	echo(); // Echo text so user sees what they type
	scrollok(stdscr, TRUE);

	printw("Ncurses setup complete. Type 'exit' to close.\n");

	int run = 1;
	while(run) {
		printw("input> ");
		refresh();

		// getnstr(buffer, max_limit)
		// Stop and wait for enter key
		getnstr(input, 99);

		run = handleInput(input);
	}
	saveGame(&player);

	endwin();
	return 0;
}
