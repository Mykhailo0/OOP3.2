#include "Truck.h"
#include <iostream>

int main() {
    Car car;
    std::cout << "Enter car details (brand, price, engine power): ";
    std::cin >> car;
    std::cout << car << std::endl;

    Truck truck;
    std::cout << "Enter truck details (brand, price, engine power, load capacity): ";
    std::cin >> truck;
    std::cout << truck << std::endl;

    return 0;
}