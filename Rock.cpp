#include "Rock.h"
#include "Scissors.h"

std::string Rock::getName() const {
    return "Rock";
}

bool Rock::defeats(const Move& other) const {
    return other.getName() == "Scissors" || other.getName() == "Lizard";
}
