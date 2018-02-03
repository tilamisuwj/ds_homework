#include<stdio.h>
#include"sqlist.h"
#include<stdlib.h>

//动态线性表
void main()
{
	sqlist list;
	list.data=(int *)malloc(10*sizeof(int));
	init_list(&list);

	give_some_data(&list);

	empty_list(&list);

	full_list(&list);

	int num;
	get_list_num(&list,&num);

	int value=55;
	insert_tail(&list,value);

	insert_head(&list,value);

	int new_value=55;
	delete_value(&list,new_value);

	int pos=4;
	delete_pos(&list,pos);

	int key=60;
	int index=search(&list,key);
	printf("key元素所在的位置是： %d\n",index);

	int e;
	get_elem(&list,pos,&e);
	printf("pos位置的元素是： %d\n",e);

	show(&list);

	clear_list(&list);

	destroy(&list);
}



//作业第一题 顺序表A中出现的元素 顺序表B中也出现 则将A中的那个元素删除
/*void main()
{
	sqlist listA;
	listA.data=(int *)malloc(10*sizeof(int));
	init_list(&listA);
	give_some_data_A(&listA);
	show(&listA);

	sqlist listB;
	listB.data=(int *)malloc(10*sizeof(int));
	init_list(&listB);
	give_some_data_B(&listB);
	show(&listB);

	delete_A_and_B(&listA,&listB);
	show(&listA);  
}*/


//第二题将两个顺序表合并
/*void main()
{
	sqlist listA;
	listA.data=(int *)malloc(10*sizeof(int));
	init_list(&listA);  //对表A初始化
	give_some_data_A2(&listA); //给表A赋值
	show(&listA);//显示表A中的元素值
	
	sqlist listB;
	listB.data=(int *)malloc(10*sizeof(int));
	init_list(&listB);//对表B初始化
	give_some_data_B2(&listB);//给表B赋值
	show(&listB);//显示表B中的元素值

	sqlist listC;
	listC.data=(int *)malloc(10*sizeof(int));
	init_list(&listC);//对表C初始化
	Let_A_and_B_to_C(&listA,&listB,&listC);//将表A和表B的元素全部给表C
	
	sort_C(&listC); //对表C进行排序
	show(&listC);//显示排序后表C中的元素值
}
*/




