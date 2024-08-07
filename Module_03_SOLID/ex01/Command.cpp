#include "Command.hpp"

Command::Command(const std::tm& date, const std::string &client)
	: date(date), client(client) {

}

Command::~Command() {
	std::cout << "Command destructor called" << std::endl;
}

const long &Command::getId() const {
	return this->id;
}

const std::string Command::getClient() const {
	return this->client;
}

void Command::add_article(const std::string &name, const int &quantity, const double &price) {
	this->artciles[name] = std::make_pair(quantity, price);
}

double Command::get_total_price() const {
	double total = 0;
	std::map< std::string, std::pair<int, double> >::const_iterator it;
	for (it = this->artciles.begin(); it != this->artciles.end(); ++it) {
		total += it->second.first * it->second.second;
	}
	return total;
}

long Command::nextId = 0;
