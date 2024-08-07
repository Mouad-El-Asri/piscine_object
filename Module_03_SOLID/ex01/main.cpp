#include "ThuesdayDiscount.hpp"
#include "PackageReductionDiscount.hpp"
#include <iomanip>
#include <sstream>

std::tm parse_date(const std::string& date_str) {
    std::tm tm = {};

    std::istringstream ss(date_str);
    char delimiter;

    ss >> tm.tm_year >> delimiter;
    ss >> tm.tm_mon >> delimiter;
    ss >> tm.tm_mday;

	tm.tm_year -= 1900;
    tm.tm_mon -= 1;  

    std::mktime(&tm);

    return tm;
}

int main() {
	std::tm date = parse_date("2024-08-06");

	PackageReductionDiscountCommand packageOrder = PackageReductionDiscountCommand(date, "Mouad El Asri");
    packageOrder.add_article("Laptop", 1, 1000.00);
    std::cout << "Total price: " << packageOrder.get_total_price() << " €" << std::endl;

    ThuesdayDiscountCommand tuesdayOrder = ThuesdayDiscountCommand(date, "Mouad El Asri");
    tuesdayOrder.add_article("Smartphone", 2, 440.00);
    tuesdayOrder.add_article("Charger", 2, 24.00);
    std::cout << "Total price: " << tuesdayOrder.get_total_price() << " €" << std::endl;

	return 0;
}
