// Engine.cpp
#include "Engine.h"
#include <iostream>

Engine::Engine(int p) : power(p) {
    if (p < 0) {
        std::cerr << "Error: Power cannot be negative.\n";
        exit(1);
    }
}

Engine::Engine(const Engine& o)
{
    power = o.power;
}

int Engine::getPower() const { return power; }

void Engine::setPower(int p) {
    if (p < 0) {
        std::cerr << "Error: Power cannot be negative.\n";
        exit(1);
    }
    power = p;
}

Engine::operator std::string() const { return "Engine power: " + std::to_string(power); }

std::istream& operator>>(std::istream& in, Engine& e) {
    in >> e.power;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Engine& e) {
    out << "Engine power: " << e.power;
    return out;
}