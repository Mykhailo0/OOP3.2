// Truck.cpp
#include "Truck.h"
#include <iostream>

Truck::Truck(std::string b, double pr, int p, double lc) : Car(b, pr, p), loadCapacity(lc) {
    if (lc < 0) {
        std::cerr << "Error: Load capacity cannot be negative.\n";
        exit(1);
    }
}

Truck::Truck(const Truck& o)
{
    setBrand(o.getBrand());
    setPrice(o.getPrice());
    setEngine(o.getEngine());
    setLoadCapacity(o.getLoadCapacity());

}

Truck::~Truck() {}

double Truck::getLoadCapacity() const { return loadCapacity; }

void Truck::setLoadCapacity(double lc) {
    if (lc < 0) {
        std::cerr << "Error: Load capacity cannot be negative.\n";
        exit(1);
    }
    loadCapacity = lc;
}

Truck::operator std::string() const { return std::string(Car::operator std::string()) + ", load capacity: " + std::to_string(loadCapacity); }


std::istream& operator>>(std::istream& in, Truck& t) {
    in >> static_cast<Car&>(t) >> t.loadCapacity;
    return in;
}


std::ostream& operator<<(std::ostream& out, const Truck& t) {
    out << static_cast<const Car&>(t) << ", load capacity: " << t.loadCapacity;
    return out;
}