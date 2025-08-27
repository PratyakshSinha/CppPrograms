#ifndef CAR_H
#define CAR_H

#include <vector>

class Observer; // Forward declaration

// If you want some other variable to notify some other observers then create a separate list and separate notify methods

class Car {
    int position;
    /// int speed;
    std::vector<Observer*> observerList;
    ///std::vecto<Observer*> observerSpeedList;

public:
    int getPosition();
    void setPosition(int newPosition);
    /// void set speed(int newSpeed);
    void attach(Observer *obs);
    void detach(Observer *obs);
    void notify();
    /// void notifySpeed();
};

#endif
