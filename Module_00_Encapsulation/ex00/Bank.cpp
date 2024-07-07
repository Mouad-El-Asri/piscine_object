#include "Bank.hpp"

Bank::Bank() : liquidity(0) {}

const int &Bank::getLiquidity() const {
	return liquidity;
}

void Bank::addFees(const int &feesAmount) {
	this->liquidity += feesAmount;
}

void Bank::deposit(Account *account, const int &moneyAmount) {
	int fees = moneyAmount * 0.05;
	int accountMoneyAmount = moneyAmount - fees;
	this->addFees(fees);
	account->value += accountMoneyAmount;
}

void Bank::createAcount(Account *account) {
	this->clientAccounts.push_back(account);
}

void Bank::deleteAccount(const int &id) {
	// if (it != this->clientAccounts.end()) {
	// 	this->clientAccounts.erase(it);
	// }
}

void Bank::modifyAccount(const int &id) {
	
}
