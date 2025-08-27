#include "Observer.h"
#include "SpaceShip.h"

int main() {
    int height;
    cout << "Either height of rocket OR press 0 to exit" << endl;
    cin >> height;

    SpaceShip* ship = new SpaceShip();

    PressureObserver    po(ship);
    SpeedObserver       so(ship);
    TemperatureObserver to(ship);

    while (height)
    {
        ship->setHeight(height);
        cin >> height;
    }
    cout << "Byee!!!" << endl;
    return 0;
}