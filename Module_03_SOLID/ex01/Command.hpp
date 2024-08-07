#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <iostream>
#include <map>
#include <utility>
#include <ctime>

class Command {
	protected:
		long id;
		static long nextId;
		std::tm date;
		std::string client;
		std::map< std::string, std::pair<int, double> > artciles;

	public:
		Command(const std::tm& date, const std::string &client);
		virtual ~Command();

		const long &getId() const;
		const std::string getClient() const;

		void add_article(const std::string &name, const int &quantity, const double &price);
		virtual double get_total_price() const;
};

#endif