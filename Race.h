#ifndef RACE_H
#define RACE_H

#include "Horse.h"
#include <iostream>

class Race {
private:
    static const int numHorses = 5;
    const int trackLength = 15;
    Horse horses[numHorses];

public:
    Race();
    void printTrack() const;
    void runRace();
};

#endif // RACE_H
