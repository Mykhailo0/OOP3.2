// Car.h
#pragma once
#include "Engine.h"
#include <string>

class Car {
    std::string brand;
    double price;
    Engine engine;
public:
    Car(std::string b = "", double pr = 0.0, int p = 0);
    Car(const Car& other);
    ~Car();
    std::string getBrand() const;
    double getPrice() const;
    Engine getEngine() const;
    void setBrand(std::string b);
    void setPrice(double pr);
    void setEngine(const Engine& e);


    operator std::string() const;

    friend std::istream& operator>>(std::istream& in, Car& c);
    friend std::ostream& operator<<(std::ostream& out, const Car& c);
};