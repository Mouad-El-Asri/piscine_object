#include "Account.hpp"

Account::Account() : id(nextId++), value(0) {
}

const int &Account::getId() const {
	return this->id;
}

const int &Account::getValue() const {
	return this->value;
}

int Account::nextId = 0;