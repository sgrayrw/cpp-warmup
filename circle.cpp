#include "circle.h"

Circle::Circle() : radius(0) {}

Circle::~Circle() = default;

Circle::Circle(const Circle& other) : radius(other.radius) {}

Circle::Circle(float radius) : radius(radius) {}

Circle& Circle::operator=(const Circle& other) {
    radius = other.radius;
    return *this;
}

Circle Circle::operator+(const Circle& other) {
    return Circle(radius + other.radius);
}

std::ostream& operator<<(std::ostream& os, const Circle& circle) {
    os << circle.radius;
    return os;
}

float Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(float radius) {
    this->radius = radius;
}

float Circle::computeArea() const {
    return M_PI * radius * radius;
}
