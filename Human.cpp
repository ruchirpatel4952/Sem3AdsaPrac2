#include "Human.h"
#include "Rock.h" // Include specific move headers
#include <iostream>
#include <memory>

Human::Human(std::string playerName) : name(playerName) {}

std::unique_ptr<Move> Human::makeMove() {
    std::cout << "Enter move (Rock, Paper, etc.): ";
    std::string move;
    std::cin >> move;
    // will return the appropriate move object (Rock, Paper, etc.)
    return std::make_unique<Rock>(); 

std::string Human::getName() const {
    return name;
}
