#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    std::string getName() const override {
        return "Rock";
    }

    bool defeats(const std::shared_ptr<Move>& other) const override{
        return other->getName() == "Scissors"; // Simplified rule
    }
};

#endif
