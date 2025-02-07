#include "Horse.h"
#include <cstdlib>

Horse::Horse() {
    position = 0;
}

void Horse::move() {
    if (rand() % 2 == 1) { // 50% chance of moving forward
        position++;
    }
}

bool Horse::hasFinished() const {
    return position >= 14;
}

int Horse::getPosition() const {
    return position;
}
