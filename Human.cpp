#include "Human.h"
#include "Rock.h" 
#include "Paper.h" 
#include <memory>

Human::Human(const std::string& name) : name(name) {}

std::unique_ptr<Move> Human::makeMove() {
    std::cout << "Enter move (Rock, Paper, etc.): ";
    std::string move;
    std::cin >> move;
    return std::make_unique<Rock>(); 
}

std::string Human::getName() const {
    return name;
}
