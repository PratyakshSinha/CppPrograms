#ifndef PLANE_H
#define PLANE_H

#include <iostream>

class Plane{
    std::string _plane;
    std::string _body;
    std::string _engine;

public:

    Plane(std::string planeType) : _plane{planeType} {};
    void setEngine(std::string type);
    void setBody(std::string body);
    std::string getEngine();
    std::string getBody();
    void show();
};


#endif