#include "Rock.h"
#include "Scissors.h"
#include "Lizard.h" // Assuming Lizard is part of the extended set

std::string Rock::getName() const {
    return "Rock";
}

bool Rock::defeats(const Move& other) const {
    return other.getName() == "Scissors" || other.getName() == "Lizard";
}
