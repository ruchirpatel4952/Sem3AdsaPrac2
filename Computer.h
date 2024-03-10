#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <random>
#include <memory>

class Computer : public Player {
public:
    std::unique_ptr<Move> makeMove() override {
        return std::make_unique<Rock>(); 
    }

    std::string getName() const override {
        return "Computer";
    }
};

#endif
