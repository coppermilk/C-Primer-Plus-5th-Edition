#pragma once
#include <string>

namespace NEW_CLIENT {
    class BankClient {
    public:
        BankClient(std::string clientName, unsigned int accountNumber) {
            this->accountBalance = 0;
            //strcpy(this->clientName, clientName);
            this->clientName = clientName;
            this->accountNumber = accountNumber;
        }

        void balanceAdd(double money_value);
        void balanceSubtract(double money_value);
        double getBallance();

    private:
        std::string clientName;
        unsigned int accountNumber;
        double accountBalance;

    };

}
