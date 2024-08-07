#include "ThuesdayDiscount.hpp"

ThuesdayDiscountCommand::ThuesdayDiscountCommand(const std::tm& date, const std::string &client)
	: Command(date, client) {
	std::cout << "ThuesdayDiscountCommand default constructor called" << std::endl;
}

ThuesdayDiscountCommand::~ThuesdayDiscountCommand() {
	std::cout << "ThuesdayDiscountCommand destructor called" << std::endl;
}

bool ThuesdayDiscountCommand::is_tuesday() const {
	return date.tm_wday == 2;
}

double ThuesdayDiscountCommand::get_total_price() const {
	double total = Command::get_total_price();
	if (is_tuesday())
		total *= 0.9;
	return total;
}
