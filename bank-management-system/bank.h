#ifndef BANK_H
#define BANK_H

#include "customer.h"
#include "account.h"

#include <vector>

class Bank {
private:
    std::vector<Customer> customers;
    std::vector<Account> accounts;

public:
    void addCustomer(int id, const std::string& name);
    void createAccount(int accountId, int customerId, double initialBalance);
    void deposit(int accountId, double amount);
    void withdraw(int accountId, double amount);
    void displayAccounts();
};

#endif // BANK_H
