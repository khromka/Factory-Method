#pragma once
#include "TransportFactory.h"
#include "../transport/Truck.h"

class TruckFactory : public TransportFactory {
public:
    std::unique_ptr<ITransport> create() const override {
        return std::make_unique<Truck>();
    }
};
