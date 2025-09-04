#include "PlaneBuilder.hpp"

void PropellerBuilder::getPartsDone() {
    _plane = new Plane("Propeller Plane");
}

void PropellerBuilder::buildEngine() {
    _plane->setEngine("Propeller Engine");
}

void PropellerBuilder::buildBody() {
    _plane->setBody("Propeller Body");
}

void JetBuilder::getPartsDone() {
    _plane = new Plane("Jet Plane");
}

void JetBuilder::buildEngine() {
    _plane->setEngine("Jet Engine");
}

void JetBuilder::buildBody() {
    _plane->setBody("Jet Body");
}

