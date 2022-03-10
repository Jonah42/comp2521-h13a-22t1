#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct node *Node;
struct node {
	Node next;
	int value;
	char c[128];
};

Node createNode(int value) {
	Node n = malloc(sizeof(struct node));
	assert(n != NULL);
	strcpy(n->c, "Hello worlderkjvhearijlkvnhtesrjl");
	n->value = value;
	n->next = NULL;
	return n;
}

int main(void) {
	Node n1 = createNode(3);
	n1->next = createNode(1);
	n1->next->next = createNode(4);

	printf("%d -> %d -> %d -> X\n", n1->value, n1->next->value, n1->next->next->value);
	free(n1->next->next);
	free(n1->next);
	free(n1);
}