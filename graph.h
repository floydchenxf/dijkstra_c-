#include <map>
#include <vector>
#include <queue>
#include "vertex.h"

using namespace std;
class Graph {
	private:
		map<int, vector<Vertex> > vertexes;
	public:
		void addVertex(int id, vector<Vertex> &vertexs);
		vector<int> getShortestPath(int start, int finish);
};
