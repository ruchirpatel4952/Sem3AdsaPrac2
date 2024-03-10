#include "Paper.h"
#include "Rock.h"

std::string Paper::getName() const {
    return "Paper";
}

bool Paper::defeats(const Move& other) const {
    return other.getName() == "Rock" || other.getName() == "Spock";
}
