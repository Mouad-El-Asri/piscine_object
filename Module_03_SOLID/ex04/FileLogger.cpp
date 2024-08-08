#include "FileLogger.hpp"

FileLogger::FileLogger(const std::string &fileName, const std::string &header)
	: header(header) {
		std::cout << "FileLogger constructor called" << std::endl;
		this->file.open(fileName.c_str(), std::ios::app);
		if (!file.is_open()) {
			std::cerr << "Failed to open: " << fileName << std::endl;
			exit(EXIT_FAILURE);
		}
}

FileLogger::~FileLogger() {
	std::cout << "FileLogger destructor called" << std::endl;
	if (this->file.is_open())
		this->file.close();
}

void FileLogger::write(const std::string &str) {
	if (this->header.empty())
		this->file << str << std::endl;
	else {
		this->file << header << std::endl;
		this->file << str << std::endl;
	}
}
