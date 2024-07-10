#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vector2.hpp"
#include <iostream>
#include <vector>

class Graph {
	private:
		int size;
		std::vector< std::vector<std::string> > graph;
		std::vector< Vector2 > pointsList;
	public:
		Graph();
		Graph(const int &size);
		const Vector2 &getPoint(const int &i) const;

		void addPoint(const Vector2 &point);
		void addPointsToGraph();
		void displayGraph();

		friend std::ostream& operator << (std::ostream& os, const Graph &graph) {
			for (std::vector<Vector2>::const_iterator it = graph.pointsList.begin(); it != graph.pointsList.end(); ++it)
				os << "[" << (*it).getX() << ", " << (*it).getY() << "]";
			return (os);
		}
};

#endif