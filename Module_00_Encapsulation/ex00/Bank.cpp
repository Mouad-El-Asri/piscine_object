#include "Bank.hpp"

Bank::Bank() : liquidity(0) {
	std::cout << "Bank created!" << std::endl;
}

Bank::~Bank() {
	for (std::vector<Account *>::const_iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); ++it)
		delete (*it);
	this->clientAccounts.clear();
	std::cout << "Bank destroyed!" << std::endl;
}

const int &Bank::getLiquidity() const {
	return liquidity;
}

const Account &Bank::getAccountById(const int &id) const {
	for (std::vector<Account *>::const_iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == id)
			return (**it);
	}
	throw std::invalid_argument("No account exist in the bank with the id!");
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
	getAccountById(account->getId());
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
	getAccountById(account->getId());
	int fees = withdrawalAmount * 0.05;
	int accountWithdrawalAmount = withdrawalAmount + fees;
	this->addFees(fees);
	account->value -= accountWithdrawalAmount;
	this->liquidity -= accountWithdrawalAmount;
	std::cout << "Withdrawal of " << withdrawalAmount << " from account " << account->getId() << std::endl;
}

void Bank::giveLoan(const int &id, const int&loanAmount) {
	if (this->liquidity <= loanAmount)
		throw std::runtime_error("Insufficient bank liquidity to give loan");

	for (std::vector<Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == id) {
			(*it)->value += loanAmount;
			int fees = loanAmount * 0.05;
			(*it)->loan += loanAmount + fees;
			std::cout << "Loan of " << loanAmount << " given to account " << (*it)->getId() << std::endl;
			return ;
		}
	}
	throw std::invalid_argument("No account exist in the bank with the id!");
}

long Bank::addAcount(Account *account) {
	for (std::vector<Account *>::const_iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == account->getId())
			throw std::runtime_error("Account already exists!");
	}
	this->clientAccounts.push_back(account);
	std::cout << "Account " << account->getId() << " added to the bank" << std::endl;
	return account->getId();
}

long Bank::addNewAcount() {
	Account *newAccount = new Account();
	long newAccountId = newAccount->getId();
	this->clientAccounts.push_back(newAccount);
	return newAccountId;
}

void Bank::deleteAccount(const int &id) {
	for (std::vector<Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); ++it) {
		if ((*it)->getId() == id) {
			delete *it;
			this->clientAccounts.erase(it);
			std::cout << "Account " << id << " deleted from the bank" << std::endl;
			return ;
		}
	}

	throw std::invalid_argument("No account exist in the bank with the id!");
}

void Bank::getLoanBack(const int &id) {
	for (std::vector<Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
		if ((*it)->getId() == id) {
			(*it)->value -= (*it)->getLoan();
			(*it)->loan = 0;
			std::cout << "Loan of account " << id << " paid back" << std::endl;
			return ;
		}
	}

	throw std::invalid_argument("No account exist in the bank with the id!");
}
