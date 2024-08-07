#ifndef PACKAGEREDUCTIONDISCOUNT_HPP
#define PACKAGEREDUCTIONDISCOUNT_HPP

#include "Command.hpp"

class PackageReductionDiscountCommand : public Command {
	public:
		PackageReductionDiscountCommand(const std::tm& date, const std::string &client);
		~PackageReductionDiscountCommand();

		double get_total_price() const;
};

#endif