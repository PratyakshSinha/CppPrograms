#include "SpaceShip.h"
#include "Observer.h"

void SpaceShip::setHeight(int newHeight){
    _height = newHeight;
    notify();
}

int SpaceShip::getHeight(){
    return _height;
}

void SpaceShip::attach(Observer *obs){
    cout << "Attach called!!" << endl;
    observerList.push_back(obs);
}

void SpaceShip::detach(Observer* obs){
    cout << "Detach called!!" << endl;
    observerList.erase(std::remove(observerList.begin(), observerList.end(), obs), observerList.end()); 
}

void SpaceShip::notify(){
    cout << "Notify called!!" << endl;
    for(auto& obs : observerList){
        obs->update();
    }
}