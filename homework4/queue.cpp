#include"queue.h"
#include<stdio.h>

void init_que(queue *q)
{
	q->start=0;
	q->end=0;
}

bool is_full(queue *q)
{
	if((q->end+1)%MAXSIZE==q->start)
	{
		return true;
	}
	return false;
}

bool is_empty(queue *q)
{
	if(q->end==q->start)
	{
		return true;
	}
	return false;
}

void get_length(queue *q,int *len)
{
	if(is_empty(q))
	{
		return ;
	}
	*len=(q->end-q->start+MAXSIZE)%MAXSIZE;
}

void en_que(queue *q,int value)
{
	if(is_full(q))
	{
		return ;
	}
	q->data[q->end]=value;
	q->end= (q->end+1)%MAXSIZE;
}

void de_que(queue *q,int *e)
{
	if(is_empty(q))
	{
		return ;
	}
	*e=q->data[q->start];
	q->start=(q->start+1)%MAXSIZE;
}



