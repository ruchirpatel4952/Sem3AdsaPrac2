#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move {
public:
    std::string getName() const override;

    bool defeats(const std::shared_ptr<Move>& other) const override;
};

#endif
