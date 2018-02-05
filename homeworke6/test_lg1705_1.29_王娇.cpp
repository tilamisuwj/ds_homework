#include<stdio.h>
#include"link_stack.h"
#include<stdlib.h>
/*void main()
{
    linkstack s;
	

	init_stack(&s);
    push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);

	is_empty(&s);

	int e;
	pop(&s,&e);
	int i;
	pop(&s,&i);

	
	int top_value;
	get_top(&s,&top_value);

	destroy_linkstack(&s);
}*/
void main()
{
	linkstack s;

	char *str="9 3 1 - 3 * + 8 2 / +";
	int left,right;
	while(*str!=0)
	{ 
		while(*str==' ')
		{
			str ++;
		}
		if(*str >='0'&&*str<='9')
		{

			push(&s,*str-'0');
		}
		if(*str =='+' )
		{
			right=pop2(&s);
			left=pop2(&s);
			push(&s,left+right);
		}
		if(*str =='-' )
		{
			right=pop2(&s);
			left=pop2(&s);
			push(&s,left-right);
		}
		if(*str =='*' )
		{
			right=pop2(&s);
			left=pop2(&s);
			push(&s,left*right);
		}
		if(*str =='/' )
		{
			right=pop2(&s);
			left=pop2(&s);
			push(&s,left/right);
		}
		str ++;
	}
	int value=pop2(&s);
	printf("%d",value);
}

