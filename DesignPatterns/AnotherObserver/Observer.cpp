#include "Observer.h"

Observer::Observer(SpaceShip *ship){
    _ship = ship;
    _ship->attach(this);
}

SpaceShip* Observer::getShip(){
    return _ship;
}

PressureObserver::PressureObserver(SpaceShip *ship) : Observer(ship){}
void PressureObserver::update(){
    int height = getShip()->getHeight();
    cout << "Pressure Observer Checked!!!" << endl;
}

SpeedObserver::SpeedObserver(SpaceShip *ship) : Observer(ship){}
void SpeedObserver::update(){
    int height = getShip()->getHeight();
    cout << "Speed Observer Checked!!!" << endl;
    if(height == 1000){
        getShip()->detach(this);
        cout << "Speed Observer detached!!!" << endl;
    }
}

TemperatureObserver::TemperatureObserver(SpaceShip *ship) : Observer(ship){}
void TemperatureObserver::update(){
    int height = getShip()->getHeight();
    cout << "Temperature Observer Checked!!!" << endl;
}