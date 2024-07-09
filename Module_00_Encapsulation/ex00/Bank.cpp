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
	if (!account)
		throw std::invalid_argument("Null account passed to deposit");
	else if (depositAmount <= 0)
		throw std::runtime_error("Deposit calculation overflow");
	int fees = depositAmount * 0.05;
	int accountDepositAmount = depositAmount - fees;
	this->addFees(fees);
	account->value += accountDepositAmount;
	this->liquidity += accountDepositAmount;
	std::cout << "Deposit of " << accountDepositAmount << " to account " << account->getId() << std::endl;
}

void Bank::withdraw(Account *account, const int &withdrawalAmount) {
	if (!account)
		throw std::invalid_argument("Null account passed to withdraw");
	else if (account->value < withdrawalAmount)
		throw std::runtime_error("Insufficient funds to withdraw");
	else if (withdrawalAmount <= 0)
		throw std::runtime_error("Withdrawal calculation overflow");
	int fees = withdrawalAmount * 0.05;
	int accountWithdrawalAmount = withdrawalAmount + fees;
	this->addFees(fees);
	account->value -= accountWithdrawalAmount;
	this->liquidity -= accountWithdrawalAmount;
	std::cout << "Withdrawal of " << withdrawalAmount << " from account " << account->getId() << std::endl;
}

void Bank::giveLoan(Account *account, const int&loanAmount) {
	if (!account)
		throw std::invalid_argument("Null account passed to giveLoan");
	else if (this->liquidity <= loanAmount)
		throw std::runtime_error("Insufficient bank liquidity to give loan");
	account->value += loanAmount;
	int fees = loanAmount * 0.05;
	account->loan += loanAmount + fees;
	std::cout << "Loan of " << loanAmount << " given to account " << account->getId() << std::endl;
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
			std::cout << "Account " << id << " deleted from the bank" << std::endl;
			return ;
		}
	}

	throw std::invalid_argument("No account exist in the bank with the id!");
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

	throw std::invalid_argument("No account exist in the bank with the id!");
}
