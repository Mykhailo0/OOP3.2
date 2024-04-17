// Engine.h
#pragma once
#include <string>

class Engine {
    int power;
public:
    Engine(int p = 0);
    Engine(const Engine& o);
    int getPower() const;
    void setPower(int p);
    operator std::string() const;

    friend std::istream& operator>>(std::istream& in, Engine& e);
    friend std::ostream& operator<<(std::ostream& out, const Engine& e);
};