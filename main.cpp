#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human human("Player 1");
    Computer computer;
    Referee referee;
    auto winner = referee.refGame(&human, &computer);

    if (winner) {
        std::cout << winner->getName() << " wins!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}
