#ifndef __LIST
#define __LIST

struct node {struct node * next, * prev; void * value;};
typedef struct {struct node * head, * tail;} dllist;
typedef struct node list_it;

struct node * alloc_node(struct node* next, struct node* prev);
dllist * alloc_list(void);

void free_node(struct node * n);
void free_list(dllist * l);

#endif
