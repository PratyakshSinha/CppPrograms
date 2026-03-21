#include <iostream>
#include <math.h>

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;

    void printInfo() {
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Perimeter: " << perimeter() << std::endl;
    }
};

class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}
    double area() override { return M_PI * radius * radius; }
    double perimeter() override { return 2 * M_PI * radius; }
private:
    double radius;
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override { return width * height; }
    double perimeter() override { return 2 * (width + height); }
private:
    double width, height;
};

int main() {
    Shape* shapes[] = {
        new Circle(5),
        new Rectangle(4,6)
    };

    for(Shape* s : shapes){
        s->printInfo();
        std::cout << "---\n";
        delete s;
    }

    return 0;
}