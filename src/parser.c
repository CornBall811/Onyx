#include <string.h>
#include <ncurses.h>
#include "parser.h"
#include "commands.h" // Need this to call commands

int handleInput(char *input) {
	if (strcmp(input, "money") == 0) {
		checkMoney();
	} else if (strcmp(input, "stats") == 0) {
		stats();
	} else if (strcmp(input, "help") == 0) {
		help();
	} else if (strcmp(input, "exit") == 0) {
		return 0;
	} else {
		printw("Unknown command. For a list of commands, type 'help'\n");
	}
	return 1;
}

