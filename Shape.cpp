#include "Shape.h"
#include <iostream>

void Shape::display() const {
    std::cout << "Basic Shape";
}

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height;
}

void Rectangle::display() const {
    std::cout << "Rectangle (" << width << " x " << height << ")";
}

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return 3.14159 * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle (radius: " << radius << ")";
}