#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <memory>
#include "Human.h"

class Move {
public:
    virtual ~Move() = default;
    virtual std::string getName() const = 0;
    virtual bool defeats(const std::shared_ptr<Move>& other) const = 0;
};

#endif
