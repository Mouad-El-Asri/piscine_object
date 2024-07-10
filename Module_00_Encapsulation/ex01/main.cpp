#include "Graph.hpp"

int main() {
	try {
		Graph graph = Graph(6);
		graph.addPoint(Vector2(0, 0));
		graph.addPoint(Vector2(2, 2));
		graph.addPoint(Vector2(4, 2));
		graph.addPoint(Vector2(2, 4));
		graph.addPoint(Vector2(5, 5));
		graph.displayGraph();
	} catch(const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
