#define HORSE_H

class Horse {
private:
    int position;

public:
    Horse();
    void move();
    bool hasFinished() const;
    int getPosition() const;
};
