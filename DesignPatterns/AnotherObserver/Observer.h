#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include "SpaceShip.h"

class Observer{
    SpaceShip *_ship;

public:
    Observer(SpaceShip* ship);
    SpaceShip *getShip();
    virtual void update() = 0;
};

class PressureObserver : public Observer {
public:
    PressureObserver(SpaceShip *ship);
    void update() override;
};

class SpeedObserver : public Observer {
public:
    SpeedObserver(SpaceShip *ship);
    void update() override;
};

class TemperatureObserver : public Observer {
public:
    TemperatureObserver(SpaceShip *ship);
    void update() override;
};

#endif