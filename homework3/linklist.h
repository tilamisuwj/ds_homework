#include<stdio.h>
typedef int Elem_type;

typedef struct node
{
	Elem_type data;
	struct node *next;
}node;

void init_list(node *phead);

void insert_head(node *phead,Elem_type value);

void insert_tail(node *phead,Elem_type value);

void show_list(node *phead);

int get_length(node *phead);

void insert_pos(node *phead,int pos,int val);

void delete_head(node *phead);

void delete_tail(node *phead);

bool is_empty(node *phead);

void delete_list(node *phead);

int find_val(node *phead,int val);





