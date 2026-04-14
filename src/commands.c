#include <ncurses.h>
#include "commands.h" // Includes the prototypes

void help() {
	printw("Commands:\n");
	printw("MONEY	- Check how much money you currently have\n");
	printw("STATS	- View your current statistics\n");
	printw("HELP	- See a list of commands\n");
}
void checkMoney() {
	printw("Pretend this is an amount of money. I'll fix it later.\n");
}
void stats() {
	printw("Pretend these are statistics. I'll also fix this later.\n");
}
