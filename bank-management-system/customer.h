#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int id;
    std::string name;

public:
    Customer(int id, const std::string& name);

    int getID() const;
    std::string getName() const;
};

#endif // CUSTOMER_H
