#include "Graph.hpp"

int main() {
	Graph graph = Graph(6);
	graph.addPoint(0, 0);
	graph.addPoint(2, 2);
	graph.addPoint(4, 2);
	graph.addPoint(2, 4);
	graph.addPoint(5, 5);
	graph.displayGraph();
}
