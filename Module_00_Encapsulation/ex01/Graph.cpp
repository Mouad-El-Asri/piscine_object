#include "Graph.hpp"

Graph::Graph() :
	size(5),
	graph(this->size, std::vector<std::string>(this->size, ". ")),
	pointsList(this->size, std::vector<bool>(this->size, false)) {}

Graph::Graph(const int &size) :
	size(size),
	graph(this->size, std::vector<std::string>(this->size, ". ")),
	pointsList(this->size, std::vector<bool>(this->size, false)) {}

void Graph::addPoint(const float &x, const float &y) {
	if (x < this->size && x >= 0 && \
		y < this->size && y >= 0)
		this->pointsList[x][y] = true;
}

void Graph::displayGraph() {
	for (int i = 0; i < this->size; i++) {
		std::cout << this->size - 1 - i << " ";
		for (int j = 0; j < this->size; j++) {
			if (this->pointsList[size - 1 - i][j])
				std::cout << "X ";
			else
				std::cout << ". ";
		}
		std::cout << std::endl;
	}
	for (int j = 0; j < this->size; j++) {
		if (j == 0)
			std::cout << "  ";
		std::cout << j << " ";
	}
	std::cout << std::endl;
}