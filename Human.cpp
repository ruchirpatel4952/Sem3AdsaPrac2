// Human.cpp
#include "Human.h"
#include "Rock.h" // Include for Rock move
#include "Paper.h" // Include for Paper move
// Include other moves
#include <memory>

Human::Human(const std::string& name) : name(name) {}

std::unique_ptr<Move> Human::makeMove() {
    std::cout << "Enter move (Rock, Paper, etc.): ";
    std::string move;
    std::cin >> move;
    // Implement logic to return the appropriate move based on user input
    return std::make_unique<Rock>(); // Placeholder, implement properly
}

std::string Human::getName() const {
    return name;
}
