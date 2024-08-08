#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>

class FileLogger : public ILogger {
	private:
		std::ofstream file;
		std::string header;

	public:
		FileLogger(const std::string &fileName, const std::string &header = "");
		~FileLogger();

		void write(const std::string &str);
};

#endif