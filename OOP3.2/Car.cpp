// Car.cpp
#include "Car.h"
#include <iostream>

Car::Car(std::string b, double pr, int p) : brand(b), price(pr), engine(p) {
    if (pr < 0) {
        std::cerr << "Error: Price cannot be negative.\n";
        exit(1);
    }
}

Car::Car(const Car& other)
{
    brand = other.brand;
    price = other.price;
    engine = other.engine;
}

Car::~Car() {}

std::string Car::getBrand() const { return brand; }

double Car::getPrice() const { return price; }

Engine Car::getEngine() const { return engine; }

void Car::setBrand(std::string b) { brand = b; }

void Car::setPrice(double pr) {
    if (pr < 0) {
        std::cerr << "Error: Price cannot be negative.\n";
        exit(1);
    }
    price = pr;
}

void Car::setEngine(const Engine& e) { engine = e; }

Car::operator std::string() const { return "Car brand: " + brand + ", price: " + std::to_string(price) + ", " + std::string(engine); }

std::istream& operator>>(std::istream& in, Car& c) {
    in >> c.brand >> c.price >> c.engine;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Car& c) {
    out << "Car brand: " << c.brand << ", price: " << c.price << ", " << c.engine;
    return out;
}
