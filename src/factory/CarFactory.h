#pragma once
#include "TransportFactory.h"
#include "../transport/Car.h"

class CarFactory : public TransportFactory {
public:
    std::unique_ptr<ITransport> create() const override {
        return std::make_unique<Car>();
    }
};
