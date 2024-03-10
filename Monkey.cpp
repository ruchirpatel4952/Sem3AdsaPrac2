#include "Monkey.h"
#include "Ninja.h" 
#include "Robot.h"

std::string Monkey::getName() const {
    return "Monkey";
}

bool Monkey::defeats(const Move& other) const {
    return other.getName() == "Ninja" || other.getName() == "Robot";
}
