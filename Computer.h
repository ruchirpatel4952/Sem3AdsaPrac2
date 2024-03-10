#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Pirate.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
// Include other move classes as needed
#include <random>
#include <memory>
#include <string>

class Computer : public Player {
    std::string name;

    // Utility function to generate a random move
    std::unique_ptr<Move> getRandomMove() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(0, 2); // Adjust based on the number of moves
        int move = distrib(gen);

        switch (move) {
            case 0:
                return std::make_unique<Rock>();
            case 1:
                return std::make_unique<Paper>();
            case 2:
                return std::make_unique<Scissors>();
            case 3: 
                return std::make_unique<Pirate>();
            case 4:
                return std::make_unique<Monkey>();
            case 5:
                return std::make_unique<Robot>();
            case 6:
                return std::make_unique<Ninja>();
            case 7:
                return std::make_unique<Zombie>();
            default:
                return std::make_unique<Rock>(); // Default move
        }
    }

public:
    Computer(const std::string& name) : name(name) {}

    std::string getName() const override {
        return name;
    }

    std::unique_ptr<Move> makeMove() override {
        return getRandomMove();
    }
};

#endif // COMPUTER_H
