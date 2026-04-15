#include <ncurses.h>
#include "logic.h"
#include "player.h"

void updateMoney(Player *p, int amount) {
	p->money += amount;

	if (p->money < 0) {
		p->money = 0; // Can't be goin bankrupt
	}

	printw("Transaction: %s$%d. New Balance: $%d\n", (amount >= 0) ? "+" : "-", (amount >= 0) ? amount : -amount, p->money);
}
int sysMoney(Player *p) {
	return p->money;
}
