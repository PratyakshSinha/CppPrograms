#include <iostream>
#include "CarFactory.cpp"

using namespace std;

// #define SIMPLE_CAR 0
#define LUXURY_CAR 1

int main() {

#ifdef SIMPLE_CAR
    CarFactory *factory = new SimpleCarFactory;
#elif LUXURY_CAR
    CarFactory *factory = new LuxuryCarFactory;
#endif

    Car *car =factory->buildWholeCar();
    car->printDetails();

    return 0;
}