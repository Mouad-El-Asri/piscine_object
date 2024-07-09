#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vector2.hpp"
#include <iostream>
#include <vector>

class Graph {
	private:
		int size;
		std::vector< std::vector<std::string> > graph;
		std::vector< std::vector<bool> > pointsList;
	public:
		Graph();
		Graph(const int &size);
		void addPoint(const float &x, const float &y);
		void displayGraph();
};

#endif