#include "Bank.hpp"

Bank::Bank() : liquidity(0) {
	std::cout << "Bank created!" << std::endl;
}

Bank::~Bank() {
	std::cout << "Bank destroyed!" << std::endl;
}

const int &Bank::getLiquidity() const {
	return liquidity;
}

void Bank::setLiquidity(const int &liquidity) {
	this->liquidity += liquidity;
}

void Bank::addFees(const int &feesAmount) {
	this->liquidity += feesAmount;
	std::cout << "Fees of " << feesAmount << " earned by the bank" << std::endl;
}

void Bank::deposit(Account *account, const int &depositAmount) {
	int fees = depositAmount * 0.05;
	int accountDepositAmount = depositAmount - fees;
	this->addFees(fees);
	account->value += accountDepositAmount;
	std::cout << "Deposit of " << accountDepositAmount << " to account " << account->getId() << std::endl;
}

void Bank::withdraw(Account *account, const int &withdrawalAmount) {
	if (account->value >= withdrawalAmount) {
		int fees = withdrawalAmount * 0.05;
		int accountWithdrawalAmount = withdrawalAmount + fees;
		this->addFees(fees);
		account->value -= accountWithdrawalAmount;
		std::cout << "Withdrawal of " << withdrawalAmount << " from account " << account->getId() << std::endl;
	} else {
		std::cout << "Account " << account->getId() << " does not have enough money to withdraw " << withdrawalAmount << std::endl;
	}
}

void Bank::giveLoan(Account *account, const int&loanAmount) {
	if (this->liquidity > loanAmount) {
		account->value += loanAmount;
		int fees = loanAmount * 0.05;
		account->loan += loanAmount + fees;
		std::cout << "Loan of " << loanAmount << " given to account " << account->getId() << std::endl;
	} else {
		std::cout << "Bank does not have enough liquidity to give a loan of " << loanAmount << " to account " << account->getId() << std::endl;
	}
}

void Bank::addAcount(Account *account) {
	this->clientAccounts.push_back(account);
	std::cout << "Account " << account->getId() << " added to the bank" << std::endl;
}

void Bank::deleteAccount(const int &id) {
	std::vector<Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == id) {
			this->clientAccounts.erase(it);
			// (*it)->~Account();
			std::cout << "Account " << id << " deleted from the bank" << std::endl;
			return ;
		}
	}

	std::cout << "No account exist in the bank with the id : " << id << std::endl;
}

void Bank::getLoanBack(const int &id) {
	std::vector<Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == id) {
			(*it)->value -= (*it)->getLoan();
			(*it)->loan = 0;
			std::cout << "Loan of account " << id << " paid back" << std::endl;
			return ;
		}
	}

	std::cout << "No account exist in the bank with the id : " << id << std::endl;
}
