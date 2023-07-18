#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountId;
    int customerId;
    double balance;

public:
    Account(int accountId, int customerId, double balance);

    int getAccountID() const;
    int getCustomerID() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
};

#endif // ACCOUNT_H
