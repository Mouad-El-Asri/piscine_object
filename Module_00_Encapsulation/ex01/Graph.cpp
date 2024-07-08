#include "Graph.hpp"

Graph::Graph() : size(5), graph(this->size, std::vector<std::string>(this->size, ". ")) {}

Graph::Graph(const int &size) : size(size), graph(this->size, std::vector<std::string>(this->size, ". ")) {}

void Graph::addPoint(const float &x, const float &y) {
	this->pointsList.push_back(Vector2(x, y));
}

void Graph::displayGraph() {
	for (int i = 0; i < this->size; i++) {
		std::cout << this->size - 1 - i << " ";
		for (int j = 0; j < this->size; j++)
			std::cout << ". ";
		std::cout << std::endl;
	}
	for (int j = 0; j < this->size; j++) {
		if (j == 0)
			std::cout << "  ";
		std::cout << j << " ";
	}
	std::cout << std::endl;
}