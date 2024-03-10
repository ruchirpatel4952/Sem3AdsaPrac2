#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
#include <memory>

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string playerName = "Human");
    std::unique_ptr<Move> makeMove() override;
    std::string getName() const override;
};
#endif
