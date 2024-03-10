// Move.h
#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual ~Move() = default;
    virtual std::string getName() const = 0;
    virtual bool defeats(const Move& other) const = 0; // Polymorphic behavior to determine victory
};

#endif
