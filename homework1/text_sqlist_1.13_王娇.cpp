
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
	printf("开始往表中加入的元素的个数是： %d\n",num);

	int value=33;
	insert_tail(&l, value);

	insert_head(&l,value);

	delete_value(&l,value);

	int pos=3;
	delete_pos(&l, pos);

	int key=10;
	int index=search(&l, key);
	printf("key的位置是： %d\n",index);

	int e;
	get_elem(&l,pos,&e);
	printf("pos位置的元素是： %d\n",e);

	int max;
	max_elem(&l,&max);
	printf("此时表中的最大的元素是： %d\n",max);

	show(&l);


	clear_list(&l);
}