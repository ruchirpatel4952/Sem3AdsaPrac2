#include "Monkey.h"
#include "Ninja.h" // Assuming Ninja is defeated by Monkey
#include "Pirate.h" // Assuming Pirate is defeated by Monkey

std::string Monkey::getName() const {
    return "Monkey";
}

bool Monkey::defeats(const Move& other) const {
    return other.getName() == "Ninja" || other.getName() == "Pirate";
}
