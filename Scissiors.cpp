#include "Scissors.h"
#include "Paper.h"
#include "Lizard.h"

std::string Scissors::getName() const {
    return "Scissors";
}

bool Scissors::defeats(const Move& other) const {
    return other.getName() == "Paper" || other.getName() == "Lizard";
}
