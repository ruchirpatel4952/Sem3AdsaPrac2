#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"
#include "Human.h"

class Robot : public Move {
public:
    bool defeats(const std::shared_ptr<Move>& other) const override {
        return other.getName() == "Pirate" || other.getName() == "Zombie";
    }
};

#endif
