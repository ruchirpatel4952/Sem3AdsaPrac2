#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <string>
#include <memory>

class Scissors : public Move {
public:
    std::string getName() const override;
    bool defeats(const std::shared_ptr<Move>& other) const override;
};

#endif // SCISSORS_H
