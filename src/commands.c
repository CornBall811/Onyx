#include <ncurses.h>
#include <time.h>
#include "commands.h"
#include "player.h"
#include "logic.h"

void help() {
	printw("Commands:\n");
	printw("MONEY	    - Check how much money you currently have\n");
	printw("STATS	    - View your current statistics\n");
	printw("SAVE        - Save your current game\n");
	printw("updateMoney - Update money(for testing use)\n");
	printw("HELP	    - See a list of commands\n");
}
void checkMoney(Player *p) {
	printw("Money: $%d\n", p->money);
}
void stats(Player *p) {
	printw("Money: $%d\n", p->money);
}
void daily() {
	printw("Will code later");
}
