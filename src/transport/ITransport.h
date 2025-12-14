#pragma once
#include <string>

class ITransport {
public:
    virtual ~ITransport() = default;
    virtual std::string move() const = 0;
    virtual std::string type() const = 0;
};
