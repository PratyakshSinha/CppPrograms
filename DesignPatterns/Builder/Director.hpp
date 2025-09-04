#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "PlaneBuilder.hpp"

class Director {
public:
    Plane* createPlane(PlaneBuilder* builder);
};

#endif