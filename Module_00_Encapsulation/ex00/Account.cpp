#include "Account.hpp"

Account::Account() : id(nextId++), value(0), loan(0) {
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