#ifndef STREAMLOGGER_HPP
#define STREAMLOGGER_HPP

#include "ILogger.hpp"
#include <iostream>

class StreamLogger : public ILogger {
	private:
		std::ostream &outputstream;
		std::string header;

	public:
		StreamLogger(std::ostream& stream, const std::string &header = "");
		~StreamLogger();

		void write(const std::string &str);
};

#endif