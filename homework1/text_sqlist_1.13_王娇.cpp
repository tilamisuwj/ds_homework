
#include<stdio.h>
#include"list_h.h"

void main()
{
	sqlist l;
	init_list(&l);

	give_some_data(&l);

	empty_list(&l);

	full_list(&l);
	

	int num;
	get_list_num(&l, &num);
	printf("��ʼ�����м����Ԫ�صĸ����ǣ� %d\n",num);

	int value=33;
	insert_tail(&l, value);

	insert_head(&l,value);

	delete_value(&l,value);

	int pos=3;
	delete_pos(&l, pos);

	int key=10;
	int index=search(&l, key);
	printf("key��λ���ǣ� %d\n",index);

	int e;
	get_elem(&l,pos,&e);
	printf("posλ�õ�Ԫ���ǣ� %d\n",e);

	int max;
	max_elem(&l,&max);
	printf("��ʱ���е�����Ԫ���ǣ� %d\n",max);

	show(&l);


	clear_list(&l);
}