#include<stdio.h>
#include"queue.h"
void main()
{
	queue q;
	init_que(&q);

	en_que(&q,10);
	en_que(&q,20);
	en_que(&q,30);
	en_que(&q,50);
	en_que(&q,60);
	en_que(&q,70);
	en_que(&q,80);
	en_que(&q,90);
	en_que(&q,91);

	is_full(&q);

	is_empty(&q);


	int e;
	de_que(&q,&e);
	printf("%d\n",e);

	int len;
	get_length(&q,&len);
	printf("%d\n",len);

}