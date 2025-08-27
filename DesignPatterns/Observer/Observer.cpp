#include "Observer.h"

Observer::Observer(Car *car) {
    _car = car; 
    _car->attach(this);
}

Car* Observer::getCar() {
    return _car;
}

LeftObserver::LeftObserver(Car *car) : Observer(car) {}
void LeftObserver::update() {
    int pos = getCar()->getPosition();
    if (pos < 0) {
        std::cout << "Left side" << std::endl;
    }
}

RightObserver::RightObserver(Car *car) : Observer(car) {}
void RightObserver::update() {
    int pos = getCar()->getPosition();
    if (pos > 0) {
        std::cout << "Right side" << std::endl;
    }
}

MiddleObserver::MiddleObserver(Car *car) : Observer(car) {}
void MiddleObserver::update() {
    int pos = getCar()->getPosition();
    if (pos == 0) {
        std::cout << "Running in middle" << std::endl;
    }
}
