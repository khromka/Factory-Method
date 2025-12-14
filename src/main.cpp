#include <iostream>
#include "factory/CarFactory.h"
#include "factory/TruckFactory.h"

void clientCode(const TransportFactory& factory) {
    auto transport = factory.create();
    std::cout << transport->type() << " -> " << transport->move() << "\n";
}

int main() {
    CarFactory carFactory;
    TruckFactory truckFactory;

    clientCode(carFactory);
    clientCode(truckFactory);
    return 0;
}
