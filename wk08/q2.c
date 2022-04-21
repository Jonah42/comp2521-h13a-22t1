#include "Graph.h"
#include <stdlib.h>
#include "Set.h"

void dfs(Graph g, Set s, Vertex v) {
	for (Vertex u = 0; u < GraphNumVertices(g); u++) {
		if (GraphIsAdjacent(g, v, u) && !SetMember(s, u)) {
			SetInsert(s, u);
			dfs(g, s, u);
		}
	}
}

Set reachable(Graph g, Vertex src) {
	Set s = newSet();
	SetInsert(s, src);
	//int * visited = malloc()
	dfs(g, s, src);
	return s;
}

int main(void) {
	Graph g = GraphRead();
	printf("Reachable nodes: \n");
	Set s = reachable(g, 0);
	showSet(s);
	GraphFree(g);
	dropSet(s);
	return 0;
}