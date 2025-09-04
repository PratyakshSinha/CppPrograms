#include "Director.hpp"
#include "PlaneBuilder.hpp"

int main(){
    Director dir;
    JetBuilder jb;
    PropellerBuilder pb;

    Plane *jet       = dir.createPlane(&jb);
    Plane *propeller = dir.createPlane(&pb);

    jet->show();
    propeller->show();

    delete jet;
    delete propeller;

    return 0;
}