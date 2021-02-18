// Name: Yuxiao Wang
// Date: 02/17/2021

#pragma once
#include <iostream>

class Circle {
public:
    Circle();
    virtual ~Circle();
    Circle(const Circle& other);
    explicit Circle(float radius);

    Circle& operator=(const Circle& other);
    Circle operator+(const Circle& other);
    friend std::ostream& operator<<(std::ostream& os, const Circle& circle);

    float getRadius() const;
    void setRadius(float radius);
    float computeArea() const;

private:
    float radius;
};
