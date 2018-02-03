#include<stdio.h>

#define MAXSIZE 10
typedef int Elemtype;

typedef struct 
{
	Elemtype data[MAXSIZE];
	int len;
} sqlist;


void init_list(sqlist *p);

void give_some_data(sqlist *p);

void clear_list(sqlist *p);

bool empty_list(sqlist *p);

bool full_list(sqlist *p);

void get_list_num(sqlist *p,Elemtype *num);

void insert_tail(sqlist *p,Elemtype value);

void insert_head(sqlist *q,Elemtype value);

void delete_value(sqlist *p,Elemtype value);

void delete_pos(sqlist *p,int pos);

int search(sqlist *p,Elemtype key);

void show(sqlist *p); 

void get_elem(sqlist *p,int pos,Elemtype *e);

void max_elem(sqlist *p,int *max);
