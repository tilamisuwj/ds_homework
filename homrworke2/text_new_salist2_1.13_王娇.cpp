#include<stdio.h>
#include"sqlist.h"
#include<stdlib.h>

//��̬���Ա�
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
	printf("keyԪ�����ڵ�λ���ǣ� %d\n",index);

	int e;
	get_elem(&list,pos,&e);
	printf("posλ�õ�Ԫ���ǣ� %d\n",e);

	show(&list);

	clear_list(&list);

	destroy(&list);
}



//��ҵ��һ�� ˳���A�г��ֵ�Ԫ�� ˳���B��Ҳ���� ��A�е��Ǹ�Ԫ��ɾ��
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


//�ڶ��⽫����˳���ϲ�
/*void main()
{
	sqlist listA;
	listA.data=(int *)malloc(10*sizeof(int));
	init_list(&listA);  //�Ա�A��ʼ��
	give_some_data_A2(&listA); //����A��ֵ
	show(&listA);//��ʾ��A�е�Ԫ��ֵ
	
	sqlist listB;
	listB.data=(int *)malloc(10*sizeof(int));
	init_list(&listB);//�Ա�B��ʼ��
	give_some_data_B2(&listB);//����B��ֵ
	show(&listB);//��ʾ��B�е�Ԫ��ֵ

	sqlist listC;
	listC.data=(int *)malloc(10*sizeof(int));
	init_list(&listC);//�Ա�C��ʼ��
	Let_A_and_B_to_C(&listA,&listB,&listC);//����A�ͱ�B��Ԫ��ȫ������C
	
	sort_C(&listC); //�Ա�C��������
	show(&listC);//��ʾ������C�е�Ԫ��ֵ
}
*/




