// Truck.h
#pragma once
#include "Car.h"

class Truck : public Car {
    double loadCapacity;
public:
    Truck(std::string b = "", double pr = 0.0, int p = 0, double lc = 0.0);
    Truck(const Truck& o);
    ~Truck();
    double getLoadCapacity() const;
    void setLoadCapacity(double lc);
    operator std::string() const;

    friend std::istream& operator>>(std::istream& in, Truck& t);
    friend std::ostream& operator<<(std::ostream& out, const Truck& t);
};