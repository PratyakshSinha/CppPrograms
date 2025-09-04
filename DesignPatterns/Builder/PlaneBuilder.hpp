#ifndef PLANEBUILDER_H
#define PLANEBUILDER_H

#include <iostream>
#include "Plane.hpp"


class PlaneBuilder{
protected:
    Plane *_plane;

public:
    virtual void getPartsDone() = 0;
    virtual void buildEngine() = 0;
    virtual void buildBody() = 0;
    Plane* getPlane(){return _plane;}
};

class PropellerBuilder : public PlaneBuilder {
public:
    void getPartsDone();
    void buildEngine();
    void buildBody();
};

class JetBuilder : public PlaneBuilder {
public:
    void getPartsDone();
    void buildEngine();
    void buildBody();
};

#endif
