#include"linklist.h"
#include<stdlib.h>
void init_list(node *phead)
{
	phead->next=NULL;
}

void insert_head(node *phead,Elem_type value)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->data=value;
	p->next=phead->next;
	phead->next=p;
}

void insert_tail(node *phead,Elem_type value)
{
	node *new_p=(node *)malloc(sizeof(node));
	new_p->data=value;
	node *p=phead;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	new_p->next=p->next;
	p->next=new_p;
}

void show_list(node *phead)
{
	node *p=phead->next;
	while(p!=NULL)
	{
		printf("%d   ",p->data);
		p=p->next;
	}
	printf("\n");
}

int get_length(node *phead)
{
	node *p=phead;
	int i=0;
	while(p->next)
	{
		i++;
		p=p->next;
	}
	return i;
}

void insert_pos(node *phead,int pos,int val)
{
	if(phead->next==NULL)
	{
		printf("list is empty\n");
		return ;
	}
	if(pos>get_length(phead)||pos<0)
	{
		printf("pos is wrong\n");
		return ;
	}
	node *newnode=(node *)malloc(sizeof(node));
	newnode->data=val;
	node *p=phead;
	int i=0;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	newnode->next=p->next;
	p->next=newnode;
}

void delete_head(node *phead)
{
	if(phead->next==NULL)
	{
		printf("list is empty\n");
		return ;
	}
	node *p;
	p=phead->next;
	phead->next=p->next;
	free(p);
	p=NULL;
}

void delete_tail(node *phead)
{
	if(phead->next==NULL)
	{
		printf("list is empty\n");
		return ;
	}
	
	while(phead->next->next!=NULL)
	{
		phead=phead->next;
	}
	node *p=phead->next;
	phead->next=NULL;
	free(p);
	p=NULL;
}

bool is_empty(node *phead)
{
	if(phead->next==NULL)
	{
		return true;
	}
	return false;
}

void delete_list(node *phead)
{
	if(is_empty(phead))
	{
		printf("list is empty\n");
		return ;
	}
	while(phead->next!=NULL)
	{
		node *p=phead->next;
		phead->next=p->next;
		free(p);
		p=NULL;
	}
}

int find_val(node *phead,int val)
{
	if(is_empty(phead))
	{
		printf("list is empty\n");
		return 0;
	}
	node *p=phead->next;
	int i=1;
	while(p!=NULL)
	{
		if(p->data==val)
		{
			printf("val is find\n");
			return i;
		}
		i++;
		p=p->next;
	}
	printf("val is not find\n");
	return 0;
}

			



























