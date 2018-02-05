#include"linklist.h"
#include<stdlib.h>

void init_list(linklist *phead)
{
	phead->data=0;
	phead->next=NULL;
}
void init_list2(new_linklist *phead)  //复杂链表的初始化
{
	phead->data=0;
	phead->next=NULL;
	phead->sibing=NULL;
}
void insert_head2(new_linklist *phead,int value)   //复杂链表的头插
{
	new_linklist *p;
	p=(new_linklist *)malloc(sizeof(new_linklist));
	p->data=value;
	p->next=phead->next;
	phead->next=p;
}

void insert_head(linklist *phead,int value)
{
	linklist *p;
	p=(linklist *)malloc(sizeof(linklist));
	p->data=value;
	p->next=phead->next;
	phead->next=p;
}

int search_k(linklist *phead,int k)
{
	if(phead->next==NULL)
	{
		int len=get_length(phead);
		if(len<k)
		{
			return -1;
		}
	}
	linklist *p=phead->next;
	linklist *q=phead->next;
	int i=1;
	while(i<k)
	{
		q=q->next;
		i++;
	}
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	return p->data;
}
int get_length(linklist *phead)
{
	if(phead->next==NULL)
	{
		return 0;
	}
	linklist *p=phead;
	int i=0;
	while(p->next!=NULL)
	{
		p=p->next;
		i++;
	}
	return i;
}
void printf_list(linklist *phead,int *arr)
{
	if(phead->next==NULL)
	{
		return ;
	}
	linklist *p=phead->next;
	int i=0;
	while(p!=NULL)
	{
		arr[i]=p->data;
		p=p->next;
		i++;
	}
}

void delete_j(linklist *phead,int j)
{
	if(phead->next==NULL)
	{
		return ;
	}
	int len=get_length(phead);
	linklist *p=phead;
	linklist *q=p->next;
	int i=0;
	if(len>=j)
	{
		if(len==1 && len==j) //要删除的节点是头结点也是尾节点
		{
			free(p->next);
			p->next=NULL;
		}
		if(len!=1 && len==j) //要删除的节点是尾节点
		{
			while(q->next!=NULL)
			{
				p=p->next;
				q=q->next;
			}
			free(q);
			p->next=NULL;
		}
		else               //要删除的节点不是头结点也不是尾节点     
			while(i<j)
			{
				p=p->next;
				i++;
			}
			linklist *q=p->next;
			p->data=q->data;
			p->next=q->next;
			free(q);
	}
	else return ;

}

//反转链表

void list_rev(linklist *phead)
{
	if(phead->next==NULL && phead->next->next==NULL)
	{
		return ;
	}
	linklist *p=phead->next;
	linklist *p_head=NULL;
	linklist *p_next=p->next;
	while(p_next!=NULL)
	{
		p->next=p_head;
		p_head=p;
		p=p_next;
		p_next=p_next->next; 
	}
	p->next=p_head;
	phead->next=p;
}


void merge_list(linklist *phead1,linklist *phead2)
{
	if(phead1->next==NULL && phead2->next==NULL)
	{
		return ;
	}
	linklist *p=phead1;  //保存一个头结点
	linklist *p1=phead1->next;   //保存第一个结点
	linklist *p2=phead2->next;   //保存第一个结点

	while(p1!=NULL && p2!=NULL)
	{
		if(p1->data < p2->data)
		{
			p->next=p1;
			p1=p1->next;
			p=p->next;
		}
		else
		{
			p->next=p2;
			p2=p2->next;
			p=p->next;
		}
	}
	if(p1!=NULL)
	{
		p->next=p1;
	}
	else 
		p->next=p2;
}

linklist *get_sameElem(linklist *phead1,linklist *phead2)
{
	if(phead1->next==NULL && phead2->next==NULL)
	{
		return NULL;
	}

	linklist *p1=phead1->next;
	linklist *p2=phead2->next;
	
	linklist *q1=phead1->next;
	linklist *q2=phead2->next;

	int len1=get_length(q1);
	int len2=get_length(q2);
	
	if(len1>len2)
	{
		for(int i=0;i<len1-len2;i++)
		{
			p1=p1->next;
		}
	}
	if(len1<len2)
	{
		for(int i=0;i<len2-len1;i++)
		{
			p2=p2->next;
		}
	}
	while(p1!=NULL || p2!=NULL)
	{
		if(p1->data == p2->data)
		{
			return p1;
		}
		p1=p1->next;
		p2=p2->next;
	}
	return NULL;
}
