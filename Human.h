#ifndef HUMAN_H
#define HUMAN_H

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
// Include other moves as necessary

#include <iostream>
#include <memory>
#include <string>

class Human : public Player {
    std::string name;

    // Function to get the move based on user input
    std::shared_ptr<Move> getMoveFromInput(const std::string& input) {
        if (input == "Rock") {
            return std::make_shared<Rock>();
        } else if (input == "Paper") {
            return std::make_shared<Paper>();
        } else if (input == "Scissors") {
            return std::make_shared<Scissors>();
        }else if (input == "Pirate") {
            return std::make_shared<Pirate>();
        }else if (input == "Ninja") {
            return std::make_shared<Ninja>();
        }else if (input == "Robot") {
            return std::make_shared<Robot>();
        }else if (input == "Zombie") {
            return std::make_shared<Zombie>();
        }else if (input == "Monkey") {
            return std::make_shared<Monkey>();
        }
        // Extend with other moves
        else {
            std::cout << "Invalid move. Defaulting to Rock." << std::endl;
            return std::make_shared<Rock>();
        }
    }

public:
    Human(const std::string& name) : name(name) {}

    s
