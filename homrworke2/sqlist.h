#include<stdio.h>

//动态顺序表
#define INIT_SIZE 10
#define INCR_SIZE 5
typedef int Elem_type;


typedef struct
{
	Elem_type *data;
	Elem_type len;//实际长度
	Elem_type list_size;  //当前长度
} sqlist;

void init_list(sqlist *p);

void give_some_data(sqlist *p);

void destroy(sqlist *p);

void clear_list(sqlist *p);

bool empty_list(sqlist *p);

bool full_list(sqlist *p);

void get_list_num(sqlist *p,Elem_type *num);

void insert_tail(sqlist *p,Elem_type value);

void insert_head(sqlist *q,Elem_type value);

void delete_value(sqlist *p,Elem_type value);

void delete_pos(sqlist *p,int pos);

int search(sqlist *p,Elem_type key);

void show(sqlist *p); 

void get_elem(sqlist *p,int pos,Elem_type *e);


//作业第一题 顺序表A中出现的元素 顺序表B中也出现 则将A中的那个元素删除
void give_some_data_A(sqlist *p);
void give_some_data_B(sqlist *p);
void delete_A_and_B(sqlist *A,sqlist *B);


//作业第二题
//将两个顺序表合并
void give_some_data_A2(sqlist *p);
void give_some_data_B2(sqlist *p);
void Let_A_and_B_to_C(sqlist *A,sqlist *B,sqlist *C);
void sort_C(sqlist *p);