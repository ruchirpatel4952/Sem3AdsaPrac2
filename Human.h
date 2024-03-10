#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>
#include <memory>
#include <unordered_map>
#include <string>

class Human : public Player {
    std::string name;
public:
    Human(const std::string& name) : name(name) {}

    std::unique_ptr<Move> makeMove() override {
        std::string moveName;
        std::cout << "Enter move: ";
        std::cin >> moveName;
        return nullptr; 
    }

    std::string getName() const override {
        return name;
    }
};

#endif