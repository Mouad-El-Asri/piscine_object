#include "StreamLogger.hpp"

StreamLogger::StreamLogger(std::ostream& stream, const std::string &header)
	: outputstream(stream), header(header) {
	std::cout << "StreamLogger constructor called" << std::endl;
}

StreamLogger::~StreamLogger() {
	std::cout << "StreamLogger destructor called" << std::endl;
}

void StreamLogger::write(const std::string &str) {
	if (this->header.empty())
		this->outputstream << str << std::endl;
	else {
		this->outputstream << header << std::endl;
		this->outputstream << str << std::endl;
	}
}
