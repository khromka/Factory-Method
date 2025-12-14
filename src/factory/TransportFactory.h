#pragma once
#include <memory>
#include "../transport/ITransport.h"

class TransportFactory {
public:
    virtual ~TransportFactory() = default;
    virtual std::unique_ptr<ITransport> create() const = 0;
};
