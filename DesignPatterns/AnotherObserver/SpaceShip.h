#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Observer;

class SpaceShip {
    vector<class Observer* > observerList;
    int _height;

public:
    void setHeight(int newHeight);
    int getHeight();
    void attach(Observer *obs);
    void detach(Observer *obs);
    void notify();
};

#endif