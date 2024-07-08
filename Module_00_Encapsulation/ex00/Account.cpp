#include "Account.hpp"

Account::Account() : id(nextId++), value(0), loan(0) {
	std::cout << "Account " << this->getId() << " created!" << std::endl;
}

Account::~Account() {
	this->value = 0;
	this->loan = 0;
	std::cout << "Account " << this->getId() << " deleted!" << std::endl;
}

const int &Account::getId() const {
	return this->id;
}

const int &Account::getValue() const {
	return this->value;
}

const int &Account::getLoan() const {
	return this->loan;
}

int Account::nextId = 0;