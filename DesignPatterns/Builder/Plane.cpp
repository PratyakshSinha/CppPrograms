#include "Plane.hpp"

void Plane::setEngine(std::string type){
    _engine = type;
}

void Plane::setBody(std::string body) {
    _body = body;
}

std::string Plane::getEngine() {
    return _engine;
}

std::string Plane::getBody() {
    return _body;
}

void Plane::show() {
    std::cout << "Plane Type  : " << _plane << std::endl
              << "Body Type   : " << _body << std::endl
              << "Engine Type : " << _engine << std::endl << std::endl; 
}