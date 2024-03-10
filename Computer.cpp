#include "Computer.h"
#include "Rock.h" 
#include "Paper.h" 
#include <memory>

std::unique_ptr<Move> Computer::makeMove() {
    return std::make_unique<Rock>(); 
}

std::string Computer::getName() const {
    return "Computer";
}