#include "BankClient.h"

void NEW_CLIENT::BankClient::balanceAdd(double money_value) {
    accountBalance += money_value;
}

void NEW_CLIENT::BankClient::balanceSubtract(double money_value) {
    accountBalance -= money_value;
}

double NEW_CLIENT::BankClient::getBallance() {
    return accountBalance;
}
