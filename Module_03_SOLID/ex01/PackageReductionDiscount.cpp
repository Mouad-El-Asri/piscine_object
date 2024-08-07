#include "PackageReductionDiscount.hpp"

PackageReductionDiscountCommand::PackageReductionDiscountCommand(const std::tm& date, const std::string &client)
	: Command(date, client) {
	std::cout << "PackageReductionDiscountCommand default constructor called" << std::endl;

}

PackageReductionDiscountCommand::~PackageReductionDiscountCommand() {
	std::cout << "PackageReductionDiscountCommand destructor called" << std::endl;
}

double PackageReductionDiscountCommand::get_total_price() const {
	double total = Command::get_total_price();
	if (total > 150)
		total -= 10;
	return total;
}
