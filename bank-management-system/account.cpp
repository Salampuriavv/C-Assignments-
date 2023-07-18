#include "account.h"

Account::Account(int accountId, int customerId, double balance)
    : accountId(accountId), customerId(customerId), balance(balance) {}

int Account::getAccountID() const {
    return accountId;
}

int Account::getCustomerID() const {
    return customerId;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}
