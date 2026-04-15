#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
	int money;
	int daily;
} Player;

void saveGame(Player *p);
void loadGame(Player *p);

#endif
