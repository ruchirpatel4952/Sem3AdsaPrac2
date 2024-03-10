#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Player* refGame(Player* player1, Player* player2) {
        auto move1 = player1->makeMove();
        auto move2 = player2->makeMove();

        if (move1->getName() == move2->getName()) return nullptr; // Tie
        return move1->defeats(*move2) ? player1 : player2;
    }
};

#endif
