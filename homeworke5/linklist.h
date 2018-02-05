#include<stdio.h>

typedef struct node
{
	int data;
	struct node *next;
} linklist;

typedef struct new_node   //¸´ÔÓÁ´±íµÄÉùÃ÷
{
	int data;
	struct new_node *next;
	struct new_node *sibing;
} new_linklist;

void init_list(linklist *phead);

void init_list2(new_linklist *phead);

void insert_head(linklist *phead,int value);

void insert_head2(new_linklist *phead,int value);

int search_k(linklist *phead,int k);

int get_length(linklist *phead);

void printf_list(linklist *phead,int *arr);

void delete_j(linklist *phead,int j);

void list_rev(linklist *phead);

void merge_list(linklist *phead1,linklist *phead2);

linklist *get_sameElem(linklist *phead1,linklist *phead2);