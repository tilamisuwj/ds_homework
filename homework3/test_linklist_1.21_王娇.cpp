#include<stdio.h>
#include"linklist.h"
void main()
{
	node phead;
	
	init_list(&phead);   //初始话头结点

	int value=20;
	insert_head(&phead,20);
	insert_head(&phead,30);
	insert_head(&phead,40);

	int new_value=33;
	insert_tail(&phead,50);

	int pos=2,val=55;
	insert_pos(&phead,pos,val);

	int val_pos=find_val(&phead,50);
	printf("%d\n",val_pos);

	delete_head(&phead);

	delete_tail(&phead);


    show_list(&phead);
	int len=get_length(&phead);
	printf("%d\n",len);

	delete_list(&phead);
	show_list(&phead);
  
}

