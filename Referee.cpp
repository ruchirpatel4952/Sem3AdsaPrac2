#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    auto move1 = player1->makeMove();
    auto move2 = player2->makeMove();

    if (move1->getName() == move2->getName())
        return nullptr;

    if (move1->defeats(*move2.get()))
        return player1;
    else
        return player2;
}