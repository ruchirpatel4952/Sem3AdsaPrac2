#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move {
public:
    std::string getName() const override {
        return "Paper";
    }

    bool defeats(const Move& other) const override {
        return other.getName() == "Rock" || other.getName() == "Spock";
    }
};

#endif
