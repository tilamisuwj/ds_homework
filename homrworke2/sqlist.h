#include<stdio.h>

//��̬˳���
#define INIT_SIZE 10
#define INCR_SIZE 5
typedef int Elem_type;


typedef struct
{
	Elem_type *data;
	Elem_type len;//ʵ�ʳ���
	Elem_type list_size;  //��ǰ����
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


//��ҵ��һ�� ˳���A�г��ֵ�Ԫ�� ˳���B��Ҳ���� ��A�е��Ǹ�Ԫ��ɾ��
void give_some_data_A(sqlist *p);
void give_some_data_B(sqlist *p);
void delete_A_and_B(sqlist *A,sqlist *B);


//��ҵ�ڶ���
//������˳���ϲ�
void give_some_data_A2(sqlist *p);
void give_some_data_B2(sqlist *p);
void Let_A_and_B_to_C(sqlist *A,sqlist *B,sqlist *C);
void sort_C(sqlist *p);