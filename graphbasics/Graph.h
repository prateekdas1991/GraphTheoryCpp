/*
 * Graph.h
 *
 *  Created on: 16-Mar-2025
 *      Author: Personal
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>
#include <list>

using namespace std;

namespace idp {

class Graph {
private:
	int V; 		   // No of vertices
	list<int> *l;  // Dynamic memory allocation
public:
	Graph(int v);
	void addEdge(int i, int jm, bool undir=true);
	virtual ~Graph();
};

} /* namespace idp */

#endif /* GRAPH_H_ */
