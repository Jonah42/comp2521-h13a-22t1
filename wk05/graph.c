

// Adjacency Matrix

#define MAX_NODES 100


int ** initGraph(void) {
	int ** g = malloc(MAX_NODES*sizeof(int *));
	for (int i = 0; i < MAX_NODES; i++) {
		// allocate the actual data for a particular row
		g[i] = calloc(MAX_NODES, sizeof(int));
	}
	return g;
}

int main(void) {
	int** g = initGraph();
}










// Adjacency List


#define MAX_NODES 100

struct node {
	int value;
	struct node * next;
}

typedef struct node * Node;


Node * initGraph(void) {
	Node * g = malloc(MAX_NODES*sizeof(Node));
	for (int i = 0; i < MAX_NODES; i++) {
		g[i] = NULL;
	}
	return g;
}

int main(void) {
	Node * g = initGraph();
}