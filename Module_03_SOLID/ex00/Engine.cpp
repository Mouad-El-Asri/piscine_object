#include "Engine.hpp"

Engine::Engine() {
	std::cout << "Engine default constructor called" << std::endl;
}

Engine::~Engine() {
	std::cout << "Engine destructor called" << std::endl;
}

void Engine::start() {
	std::cout << "Engine started" << std::endl;
}

void Engine::stop() {
	std::cout << "Engine stopped" << std::endl;
}
