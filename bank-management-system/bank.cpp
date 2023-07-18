#include "bank.h"

#include <iostream>

void Bank::displayAccounts() {
    std::cout << "--- Account Details ---" << std::endl;
    for (const Account& account : accounts) {
        std::cout << "Account ID: " << account.getAccountID() << std::endl;
        std::cout << "Customer ID: " << account.getCustomerID() << std::endl;
        std::cout << "Balance: " << account.getBalance() << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
}


void Bank::createAccount(int accountId, int customerId, double initialBalance) {
    accounts.emplace_back(accountId, customerId, initialBalance);
    std::cout << "ACCOUNT CREATED SUCCESSFULLY!" << std::endl;
}

void Bank::deposit(int accountId, double amount) {
    for (Account& account : accounts) {
        if (account.getAccountID() == accountId) {
            account.deposit(amount);
            std::cout << "SUCCESSFULLY DEPOSITED! AVAILABLE BALANCE IS: " << account.getBalance() << std::endl;
            return;
        }
    }
    std::cout << "INVALID ACCOUNT ID!" << std::endl;
}

void Bank::withdraw(int accountId, double amount) {
    for (Account& account : accounts) {
        if (account.getAccountID() == accountId) {
            if (account.withdraw(amount)) {
                std::cout << "WITHDRAWAL SUCCESSFULLY! NEW BALANCE: " << account.getBalance() << std::endl;
            } else {
                std::cout << "INSUFFICIENT FUNDS!" << std::endl;
            }
            return;
        }
    }
    std::cout << "INVALID ACCOUNT ID!" << std::endl;
}



void Bank::addCustomer(int id, const std::string& name) {
    customers.emplace_back(id, name);
    std::cout << "CUSTOMER CREATED SUCCESSFULLY!" << std::endl;

    std::cout << "--- Account Details ---" << std::endl;
    for (const Account& account : accounts) {
        std::cout << "Account ID: " << account.getAccountID() << std::endl;
        std::cout << "Customer ID: " << account.getCustomerID() << std::endl;
        std::cout << "Balance: " << account.getBalance() << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
}
