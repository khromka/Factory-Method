#pragma once
#include "ITransport.h"

class Truck : public ITransport {
public:
    std::string move() const override { return "Truck: hauling cargo"; }
    std::string type() const override { return "Truck"; }
};
