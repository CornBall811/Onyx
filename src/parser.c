#include <string.h>
#include <ncurses.h>
#include "parser.h"
#include "commands.h"
#include "logic.h"
#include "storage.h"

int handleInput(char *input, Player *p) {
	if (strcmp(input, "money") == 0) {
		printw("Money: $%d\n", sysMoney(p));
	} else if (strcmp(input, "stats") == 0) {
		stats(p);
	} else if (strcmp(input, "help") == 0) {
		help();
	} else if (strstr(input, "updateMoney")) {
		int amount = 0;
		sscanf(input, "updateMoney %d", &amount);
		updateMoney(p, amount);
	} else if (strcmp(input, "save") == 0) {
		saveGame(p);
	} else if (strcmp(input, "exit") == 0) {
		return 0;
	} else {
		printw("Unknown command. For a list of commands, type 'help'\n");
	}
	return 1;
}
