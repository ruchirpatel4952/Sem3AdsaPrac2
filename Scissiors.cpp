#include "Scissors.h"
#include "Paper.h"  // Assuming you want to compare against Paper
#include "Rock.h"   // Assuming you want to compare against Rock
// Include other necessary headers

std::string Scissors::getName() const {
    return "Scissors";
}

bool Scissors::defeats(const std::shared_ptr<Move>& other) const {
    // Implementing basic game logic for Scissors
    // For example, Scissors defeats Paper but not Rock
    if (other->getName() == "Paper") {
        return true;
    } else {
        return false;
    }
}
