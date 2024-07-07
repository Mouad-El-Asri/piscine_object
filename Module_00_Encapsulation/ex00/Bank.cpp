#include "Bank.hpp"

Bank::Bank() : liquidity(0) {}

const int &Bank::getLiquidity() const {
	return liquidity;
}

void Bank::addFees(const int &feesAmount) {
	this->liquidity += feesAmount;
}

void Bank::deposit(Account *account, const int &depositAmount) {
	int fees = depositAmount * 0.05;
	int accountDepositAmount = depositAmount - fees;
	this->addFees(fees);
	account->value += accountDepositAmount;
}

void Bank::withdraw(Account *account, const int &withdrawalAmount) {
	int fees = withdrawalAmount * 0.05;
	int accountWithdrawalAmount = withdrawalAmount + fees;
	this->addFees(fees);
	account->value -= accountWithdrawalAmount;
}

void giveLoan(Account *account, const int&loanAmmount) {
	if (this->liquidity > loanAmmount) {
		account->value += loanAmmount;
		int fees = loanAmmount * 5%;
		account->loan += loanAmmount + fees;
	}
}

void Bank::createAcount(Account *account) {
	this->clientAccounts.push_back(account);
}

void Bank::deleteAccount(const int &id) {
	std::vector<Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->id == id) {
			this->clientAccounts(it).erase();
		}
	}
}

void Bank::modifyAccount(const int &id, const int &newValue) {
	std::vector<Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->id == id) {
			(*it)->value = newValue;
		}
	}
}
