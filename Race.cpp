#include "Race.h"
#include <cstdlib>
#include <ctime>

Race::Race() {
    finished = false;
    winner = -1;
}

void Race::printTrack() const {
    system("clear");
    for (int horseIndex = 0; horseIndex < 5; horseIndex++) {
        for (int trackPosition = 0; trackPosition < 15; trackPosition++) {
            if (horses[horseIndex].getPosition() == trackPosition)
                std::cout << horseIndex;
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
}

void Race::start() {
    srand(time(0));

    while (!finished) {
        printTrack();
        std::cout << "Press enter for another turn:";
        std::cin.get();

        for (int horseIndex = 0; horseIndex < 5; horseIndex++) {
            horses[horseIndex].move();
            if (horses[horseIndex].hasFinished()) {
                finished = true;
                winner = horseIndex;
            }
        }
    }

    printTrack();
    std::cout << "Horse " << winner << " is the winner! Woo hoo" << std::endl;
}
