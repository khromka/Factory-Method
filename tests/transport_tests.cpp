#include <cassert>
#include "../src/factory/CarFactory.h"
#include "../src/factory/TruckFactory.h"

int main() {
    CarFactory cf; TruckFactory tf;
    auto car = cf.create();
    auto truck = tf.create();
    assert(car->type() == "Car");
    assert(truck->type() == "Truck");
    assert(car->move().find("driving") != std::string::npos);
    assert(truck->move().find("hauling") != std::string::npos);
    return 0;
}
