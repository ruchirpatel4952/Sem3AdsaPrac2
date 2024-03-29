#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <string>
#include <memory>

class Ninja : public Move {
public:
    std::string getName() const override;
    bool defeats(const std::shared_ptr<Move>& other) const override;
};

#endif // NINJA_H
