Copy code
#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    std::string getName() const override {
        return "Rock";
    }

    bool defeats(const Move& other) const override {
        return other.getName() == "Scissors";
    }
};

#endif