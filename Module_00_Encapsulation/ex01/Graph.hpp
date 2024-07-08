#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vector2.hpp"
#include <iostream>
#include <vector>

class Graph {
	private:
		Vector2 graph;
		std::vector<Vector2> pointsList;
	public:
		Graph(const int &x, const int &y);
		void displayGraph();
};

#endif