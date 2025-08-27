#include "Car.h"
#include "Observer.h"
using namespace std;

int main() {
    Car *car = new Car();

    LeftObserver leftObserver(car);
    RightObserver rightObserver(car);
    MiddleObserver middleObserver(car);

    cout << "Hit left right button to drive a car in your city!!! and press break to close" << endl;

    char pressedChar;
    bool breakLoop = false;

    while(breakLoop == false){
        cin >> pressedChar;

        switch (pressedChar)
        {

        case 97: {
            car->setPosition(-1);
            break;
        }

        case 115 : {
            car->setPosition(0);
            break;
        }

        case 100 : {
            car->setPosition(1);
            break;
        }

        case 98 : {
            breakLoop = true;
            break;
        }

        default: {
            cout << "Please drive carefully!!" << endl;
            break;
        }

        }
    }

    cout << "Byee!!!" << endl;
    return 0;
}