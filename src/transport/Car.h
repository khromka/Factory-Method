#pragma once
#include "ITransport.h"

class Car : public ITransport {
public:
    std::string move() const override { return "Car: driving on road"; }
    std::string type() const override { return "Car"; }
};
