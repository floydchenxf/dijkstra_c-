
#include <string>
#include <iostream>
#include "graph.h"

using namespace std;

int main(int argc, char* args[]) {
	Graph g;
	Vertex n_1_2(2,6);
	Vertex n_1_6(6,3);
	Vertex n_1_4(4,5);
	vector<Vertex> one_v;
	one_v.push_back(n_1_2);
	one_v.push_back(n_1_6);
	one_v.push_back(n_1_4);
	g.addVertex(1, one_v);

	vector<Vertex> two_v;
	Vertex n_2_1(1,6);
	Vertex n_2_3(3,2);
	two_v.push_back(n_2_1);
	two_v.push_back(n_2_3);
	g.addVertex(2, two_v);
	
	vector<Vertex> three_v;
	Vertex n_3_2(2,2);
	Vertex n_3_4(4,1);
	three_v.push_back(n_3_2);
	three_v.push_back(n_3_4);
	g.addVertex(3,three_v);

	vector<Vertex> four_v;
	Vertex n_4_3(3,1);
	Vertex n_4_1(1, 5);
	Vertex n_4_5(5, 2);
	four_v.push_back(n_4_3);
	four_v.push_back(n_4_1);
	four_v.push_back(n_4_5);
	g.addVertex(4, four_v);

	vector<Vertex> five_v;
	Vertex n_5_4(4,2);
	Vertex n_5_6(6,2);
	five_v.push_back(n_5_4);
	five_v.push_back(n_5_6);
	g.addVertex(5, five_v);

	vector<Vertex> six_v;
	Vertex n_6_1(1,3);
	Vertex n_6_2(5,2);
	six_v.push_back(n_6_1);
	six_v.push_back(n_6_2);
	g.addVertex(6,six_v);
	
	vector<Vertex> seven_v;
	Vertex n_7_1(1,3);
	seven_v.push_back(n_7_1);
	g.addVertex(7,seven_v);
	
	vector<Vertex> eight_v;
	g.addVertex(8,eight_v);
	
	vector<int> aa = g.getShortestPath(7,3);
	for (int i=0; i < aa.size(); i++) {
		cout << aa[i] << endl;
	}
}
