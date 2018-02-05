//链表 
//15 输出倒数第k个位置的数据
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
void main()
{
	linklist phead;
	init_list(&phead);

	insert_head(&phead,20);
	insert_head(&phead,30);
	insert_head(&phead,40);
	insert_head(&phead,50);

	int len=get_length(&phead);

	int data=search_k(&phead,2);
}


//从尾到头打印链表

/*void main()
{
	linklist phead;
	init_list(&phead);

	insert_head(&phead,20);
	insert_head(&phead,30);
	insert_head(&phead,40);
	insert_head(&phead,50);

	int len=get_length(&phead);
	int *arr=(int *)malloc(sizeof(int)*len);

	printf_list(&phead,arr);
	for(int i=len-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
*/

//13  删除j节点

/*void main()
{
	linklist phead;
	init_list(&phead);

	insert_head(&phead,20);
	insert_head(&phead,30);
	insert_head(&phead,40);
	insert_head(&phead,50);

	delete_j(&phead,2);
}
*/
//  16 反转链表

/*void main()
{
	linklist phead;
	init_list(&phead);

	insert_head(&phead,20);
	insert_head(&phead,30);
	insert_head(&phead,40);
	insert_head(&phead,50);

    list_rev(&phead);
}
*/

//17 合并两个单链表
/*void main()
{
	linklist phead1;       //链表1
	init_list(&phead1);

	insert_head(&phead1,7);
	insert_head(&phead1,5);
	insert_head(&phead1,3);
	insert_head(&phead1,1);

	
	linklist phead2;      //链表1
	init_list(&phead2);

	insert_head(&phead2,8);
	insert_head(&phead2,6);
	insert_head(&phead2,4);
	insert_head(&phead2,2);

	merge_list(&phead1,&phead2);   //合并两个链表
}
*/

//26复杂链表的复制  error
/*void main()
{
	new_linklist phead1;     
	init_list2(&phead1);

	insert_head2(&phead1,9);
	insert_head2(&phead1,7);
	insert_head2(&phead1,5);
	insert_head2(&phead1,3);
	insert_head2(&phead1,1);

	new_linklist phead2;     
	init_list2(&phead2);

	insert_head2(&phead2,10);
	insert_head2(&phead2,8);
	insert_head2(&phead2,6);
	insert_head2(&phead2,4);
	insert_head2(&phead2,2);
}
*/
//37  找两个链表的公共节点
/*void main()
{
	linklist phead1;       //链表1
	init_list(&phead1);

	
	insert_head(&phead1,7);
	insert_head(&phead1,5);
	insert_head(&phead1,3);
	insert_head(&phead1,9);
	insert_head(&phead1,1);

	
	linklist phead2;      //链表1
	init_list(&phead2);

	insert_head(&phead2,7);
	insert_head(&phead2,5);
	insert_head(&phead2,4);
	insert_head(&phead2,2);

	linklist *val=get_sameElem(&phead1,&phead2);
}*/