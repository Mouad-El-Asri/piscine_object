#ifndef THUESDAYDISCOUNT_HPP
#define THUESDAYDISCOUNT_HPP

#include "Command.hpp"

class ThuesdayDiscountCommand : public Command {
	public:
		ThuesdayDiscountCommand(const std::tm& date, const std::string &client);
		~ThuesdayDiscountCommand();

		bool is_tuesday() const;
		double get_total_price() const;
};

#endif