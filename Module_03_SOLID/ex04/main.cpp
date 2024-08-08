#include "FileLogger.hpp"
#include "StreamLogger.hpp"
#include <ctime>
#include <vector>

std::string getCurrentDate() {
	time_t now = time(0);
	std::string date = ctime(&now);
	return date;
}

int main() {
	std::vector<ILogger *> loggerVec;

	StreamLogger streamLogger(std::cout, getCurrentDate());
	FileLogger fileLogger("txt", getCurrentDate());
	
	loggerVec.push_back(&streamLogger);
	loggerVec.push_back(&fileLogger);

	std::string arr[] =  {"Eminem", "Adele", "Lil Wayne", "Fat Mizzo"};
	std::vector<std::string> messageVec(arr, arr + 4);

	std::vector<std::string>::iterator it;
	for (it = messageVec.begin(); it != messageVec.end(); ++it) {
		for (unsigned int i = 0; i < loggerVec.size(); i++)
			loggerVec[i]->write(*it);
	}

	return 0;
}
