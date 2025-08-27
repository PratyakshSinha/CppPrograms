#include "Car.h"
#include "Observer.h"
#include <algorithm>

int Car::getPosition() {
    return position;
}

void Car::setPosition(int newPosition) {
    position = newPosition;
    notify();
}

void Car::attach(Observer *obs) {
    observerList.push_back(obs);
}

void Car::detach(Observer *obs) {
    observerList.erase(std::remove(observerList.begin(), observerList.end(), obs), observerList.end());
}

void Car::notify() {
    for (auto obs : observerList) {
        obs->update();
    }
}
