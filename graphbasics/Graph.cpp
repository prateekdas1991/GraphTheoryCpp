/*
 * Graph.cpp
 *
 *  Created on: 16-Mar-2025
 *      Author: Personal
 */

#include "Graph.h"

namespace idp {

Graph::Graph(int v){
	 V= v;
	 l = new list<int>[V];
}

Graph::~Graph() {
	// TODO Auto-generated destructor stub
}

void Graph::addEdge(int i, int jm, bool undir){
	
}
} /* namespace idp */
