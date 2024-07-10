#include "Graph.hpp"

Graph::Graph() :
	size(5),
	graph(this->size, std::vector<std::string>(this->size, ". ")) {}

Graph::Graph(const int &size) :
	size(size),
	graph(this->size, std::vector<std::string>(this->size, ". ")) {}

const Vector2 &Graph::getPoint(const int &i) const {
	if (i < 0 && i >= this->size)
		std::out_of_range("Index out of range");
	return this->pointsList[i];
}

void Graph::addPoint(const Vector2 &point) {
	if (point.getX() < this->size && point.getX() >= 0 && \
		point.getY() < this->size && point.getY() >= 0)
		this->pointsList.push_back(point);
	else
		throw std::out_of_range("Point is out of range");
}

void Graph::addPointsToGraph() {
	for (std::vector<Vector2>::iterator it = pointsList.begin(); it != pointsList.end(); ++it)
		this->graph[(*it).getX()][(*it).getY()] = "X ";
}

void Graph::displayGraph() {
	addPointsToGraph();
	for (int i = 0; i < this->size; i++) {
		std::cout << this->size - 1 - i << " ";
		for (int j = 0; j < this->size; j++)
			std::cout << this->graph[size - 1 - i][j];
		std::cout << std::endl;
	}
	for (int j = 0; j < this->size; j++) {
		if (j == 0)
			std::cout << "  ";
		std::cout << j << " ";
	}
	std::cout << std::endl;
}