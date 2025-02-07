#include "Race.h"

int main() {
    Race race;
    race.start();
    return 0;
} // end of main



// test the horse class
/*
#include <iostream>
#include "Horse.h"

using namespace std;

int main() {
    Horse dummy_horse; // Create a Horse object

    cout << "Initial Position: " << dummy_horse.getPosition() << endl;

    // Simulate horse movement
    for (int i = 0; i < 10; i++) {
        dummy_horse.move();
        cout << "Turn " << i + 1 << " - Position: " << dummy_horse.getPosition() << endl;

        // Check if horse has finished the race
        if (dummy_horse.hasFinished()) {
            cout << "The horse has finished the race!" << endl;
            break;
        }
    }

    return 0;
}
*/