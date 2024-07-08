#include "Graph.hpp"

Graph::Graph(const int &x, const int &y) {
	this->graph.x = x;
	this->graph.y = y;
}

void Graph::displayGraph() {
	for (int i = 0; i <= this->graph.x; i++) {
		std::cout << this->graph.x - i << " ";
		for (int j = 0; j <= this->graph.y; j++) {
			std::cout << ". ";
		}
		std::cout << std::endl;
	}
	for (int j = 0; j <= this->graph.y; j++) {
		if (j == 0)
			std::cout << "  ";
		std::cout << j << " ";
	}
	std::cout << std::endl;
}