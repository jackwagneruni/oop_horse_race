#include "Horse.h"
#include <cstdlib>
#include <iostream>

Horse::Horse() {
    ID = 0;
    trackLength = 0;
    position = 0;
}

void Horse::init(int id, int length) {
    ID = id;
    trackLength = length;
    position = 0;
}

void Horse::advance() {
    if (rand() % 2 == 1) {
        position++;
    }
}

void Horse::printLane() const {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) {
            std::cout << ID;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

bool Horse::isWinner() const {
    return position >= trackLength;
}

int Horse::getPosition() const {
    return position;
}
