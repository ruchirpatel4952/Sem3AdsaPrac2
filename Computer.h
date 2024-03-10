#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>
#include <random>
#include "Rock.h"
#include "Paper.h" 

class Computer : public Player {
public:
    std::unique_ptr<Move> makeMove() override;
    std::string getName() const override;
};

#endif