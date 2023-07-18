#include "bank.h"

#include <iostream>

int main() {
    Bank bank;
    int choice;

    do {
        std::cout << "<<<<<<<< BANK MANAGEMENT SYSTEM >>>>>>>>" << std::endl;
        std::cout << "1. Add Customer" << std::endl;
        std::cout << "2. Create Account" << std::endl;
        std::cout << "3. Deposit" << std::endl;
        std::cout << "4. Withdraw" << std::endl;
        std::cout << "5. Display Accounts" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int customerId;
                std::string customerName;
                std::cout << "Enter customer ID: ";
                std::cin >> customerId;
                std::cout << "Enter customer name: ";
                std::cin >> customerName;
                bank.addCustomer(customerId, customerName);
                break;
            }
            case 2: {
                int accountId, customerId;
                double initialBalance;
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter customer ID for the account: ";
                std::cin >> customerId;
                std::cout << "Enter initial balance: ";
                std::cin >> initialBalance;
                bank.createAccount(accountId, customerId, initialBalance);
                break;
            }
            case 3: {
                int accountId;
                double amount;
                std::cout << "Enter account ID for deposit: ";
                std::cin >> accountId;
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                bank.deposit(accountId, amount);
                break;
            }
            case 4: {
                int accountId;
                double amount;
                std::cout << "Enter account ID for withdrawal: ";
                std::cin >> accountId;
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                bank.withdraw(accountId, amount);
                break;
            }
            case 5: {
                bank.displayAccounts();
                break;
            }
            case 0: {
                std::cout << "************************************************" << std::endl;
                std::cout << "EXIT PROGRAM" << std::endl;
                std::cout << "************************************************" << std::endl;
                break;
            }
            default:
                std::cout << "INVALID CHOICE. PLEASE TRY AGAIN." << std::endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
