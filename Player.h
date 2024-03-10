#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <memory>
#include "Move.h"

class Player {
public:
    virtual std::unique_ptr<Move> makeMove() = 0;
    virtual std::string getName() const = 0;
    virtual ~Player() {}
};

#endif