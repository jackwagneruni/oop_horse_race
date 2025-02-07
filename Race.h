#ifndef RACE_H
#define RACE_H

#include "Horse.h"
#include <iostream>

class Race {
private:
    Horse horses[5];
    bool finished;
    int winner;

public:
    Race();
    void printTrack() const;
    void start();
};

#endif // RACE_H
