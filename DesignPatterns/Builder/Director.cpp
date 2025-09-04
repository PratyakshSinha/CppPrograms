#include "Director.hpp"

Plane* Director::createPlane(PlaneBuilder* builder){
    builder->getPartsDone();
    builder->buildEngine();
    builder->buildBody();
    return builder->getPlane();
}