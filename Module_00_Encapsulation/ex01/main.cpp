#include "Graph.hpp"

int main() {
	Graph graph = Graph(5);
	graph.addPoint(0, 0);
	graph.addPoint(2, 2);
	graph.addPoint(4, 2);
	graph.addPoint(2, 4);
	graph.displayGraph();
}