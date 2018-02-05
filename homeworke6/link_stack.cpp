#include"link_stack.h"
#include<stdio.h>
#include<stdlib.h>

void init_stack(linkstack *t)
{
	t->top=NULL;
	t->length=0;

}

void push(linkstack *t,int value)
{
	link_stack *p=(link_stack *)malloc(sizeof(link_stack)*1);
	if(p==NULL)
	{
		return ;
	}
	p->data=value;
	p->next=t->top;
	t->top=p;
	t->length++;
}

bool is_empty(linkstack *t)
{
	if(t->top==NULL)
	{
		return true;
	}
	return false;
}

void pop(linkstack *t,int *e)
{
	if(is_empty(t))
	{
		printf("Õ»¿Õ");
		return ;
	}
	new_link temp=t->top;
	*e=t->top->data;
	t->top=t->top->next;
	free(temp);
	t->length --;
}

void get_top(linkstack *t,int *value)
{
	if(is_empty(t))
	{
		printf("Õ»¿Õ");
		return ;
	}
	*value=t->top->data;
}

void destroy_linkstack(linkstack *t)
{
	if(is_empty(t))
	{
		printf("Õ»¿Õ");
		return ;
	}
	while(t->top!=NULL)
	{
		new_link temp=t->top;
		t->top=t->top->next ;
		free(temp);
	}
	t->length=0;
}

	
	
int pop2(linkstack *t)
{
	new_link temp=t->top;
	int value=temp->data;
	t->top=temp->next ;
	free(temp);
	return value;
}







