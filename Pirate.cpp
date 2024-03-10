#include "Ninja.h"
#include "Pirate.h"  // Include other specific moves as necessary for comparison
#include "Ninja.h"
#include "Monkey.h"

std::string getName() const override {
        return "Pirate";
    }
bool Ninja::defeats(const std::shared_ptr<Move>& other) const {
    return other->getName() == "Monkey" || other->getName() == "Ninja";
}
