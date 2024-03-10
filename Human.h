#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>
#include <iostream>

class Human : public Player {
    std::string name;
public:
    Human(const std::string& name);
    std::unique_ptr<Move> makeMove() override;
    std::string getName() const override;
};

#endif
