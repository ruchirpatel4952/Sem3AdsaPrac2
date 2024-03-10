#include "Ninja.h"
#include "Pirate.h" // Include other moves as needed for comparison
#include "Robot.h"
#include "Zombie.h"
// Include other necessary move headers

// Return the name of the move
std::string Ninja::getName() const {
    return "Ninja";
}

// Implement logic for Ninja defeating other moves
bool Ninja::defeats(const std::shared_ptr<Move>& other) const {
    // Example logic: Ninja defeats Pirate and Zombie, but not Robot
    if (other->getName() == "Pirate" || other->getName() == "Zombie") {
        return true;
    } else {
        return false;
    }
}
