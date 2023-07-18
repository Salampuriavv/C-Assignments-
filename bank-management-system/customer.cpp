#include "customer.h"

Customer::Customer(int id, const std::string& name) : id(id), name(name) {}

int Customer::getID() const {
    return id;
}

std::string Customer::getName() const {
    return name;
}
