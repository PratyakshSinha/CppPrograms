#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include "Car.h"

class Observer {
    Car *_car;

public:
    Observer(Car *car);
    virtual void update() = 0;

protected:
    Car* getCar();
};

class LeftObserver : public Observer {
public:
    LeftObserver(Car *car);
    void update() override;
};

class RightObserver : public Observer {
public:
    RightObserver(Car *car);
    void update() override;
};

class MiddleObserver : public Observer {
public:
    MiddleObserver(Car *car);
    void update() override;
};

#endif
    