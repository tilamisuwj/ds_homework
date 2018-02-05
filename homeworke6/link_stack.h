#include<stdio.h>

typedef struct stack_node
{
	int data;
	struct stack_node *next;
}link_stack,*new_link;
typedef struct linkstack
{
	new_link top;
	int length;
}linkstack;


void init_stack(linkstack *top);

void push(linkstack *top,int value);

bool is_empty(linkstack *top);

void pop(linkstack *top,int *e);

void get_top(linkstack *top,int *value);

int pop2(linkstack *top);

void destroy_linkstack(linkstack *top);
