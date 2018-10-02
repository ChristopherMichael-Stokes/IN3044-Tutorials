#include <stdlib.h>
#include "list.h"

struct node * alloc_node(struct node* next, struct node* prev)
{
	struct node * n = malloc(sizeof(struct node*));
	if (next != NULL)
		next->prev = n;
	n->next = next;

	if (prev != NULL)
		prev->next = n;
	n->prev = prev;

	return n;
}

dllist * alloc_list(void)
{
	dllist * list = malloc(sizeof(dllist*));
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void free_node(struct node * n)
{
	if (n->prev != NULL) 
		n->prev->next = n->next;
	if (n->next != NULL)
		n->next->prev = n->prev;
	free(n);

}

void free_list(dllist * l)
{

}
