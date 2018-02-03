#include<stdio.h>
#include<stdlib.h>
#include"sqlist.h"
//1初始化顺序表
void init_list(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
	p->list_size=10;
}
//2 给顺序表元素值
void give_some_data(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len++)
	{
		p->data[i]=i*10;
	}
}


//3 销毁数据表
void destroy(sqlist *p)
{
	free(p->data);
	p->len=0;
	p->list_size=0;
}

//4 清空顺序表
void clear_list(sqlist *p)
{
	if(p->len==0)
	{
		return ;
	}
	for(int i=0;i<p->len;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
}

//5 判断顺序表是否为空
bool empty_list(sqlist *p)
{
	if(p->len==0)
	{
		return true;
	}
	return false;
}

//6 判断顺序表是否为满
bool full_list(sqlist *p)
{
	if(p->len==p->list_size)
	{
		return true;
	}
	return false;
}

//7 输出顺序表的总长度
void get_list_num(sqlist *p,Elem_type *num)
{
	*num=p->list_size;
}


//8 扩容函数
void INCR_list(sqlist *p)
{
	p->data=(Elem_type *)realloc(p->data,sizeof(int)*(p->list_size+INCR_SIZE));
	p->list_size=p->list_size+INCR_SIZE;
}

//9 向尾部插入元素
void insert_tail(sqlist *p,Elem_type value)
{
	if(full_list(p))
	{
		/*p->data=(Elem_type *)realloc(p->data,sizeof(int)*(p->list_size+INCR_SIZE));   //开始扩容  
		p->list_size=p->list_size+INCR_SIZE;  */  //当前长度+扩容长度
		INCR_list(p);
	}
	p->data[p->len]=value;   //向尾部增加值
	p->len++ ;
}

//10 向头部插入元素
void insert_head(sqlist *p,Elem_type value)
{
	if(full_list(p))
	{
		p->data=(Elem_type *)realloc(p->data,sizeof(Elem_type)*(p->list_size+INCR_SIZE));   //开始扩容  
		p->list_size=p->list_size+INCR_SIZE;    //当前长度+扩容长度
	}
	for(int i=p->len-1;i>=0;--i)
	{
		p->data[i+1]=p->data[i];
	}
	p->data[0]=value;
	p->len++;
}

//11 根据数据项删除该数据
void delete_value(sqlist *p,Elem_type value)
{
	if(empty_list(p))
	{
		return ;
	}
	for(int i=0;i<p->len;i++)
	{
		if(p->data[i]==value)
		{
			for(int j=i;j<p->len-1;j++)
			{
				p->data[j]=p->data[j+1];
				p->data[j+1]=0;
			}
			p->len --;
		}
	}
}

//12 根据位置删除元素
void delete_pos(sqlist *p,Elem_type pos)
{
	if(empty_list(p)||pos>p->len)
	{
		return ;
	}
	for(int i=pos;i<p->len-1;i++)
	{
		p->data[i]=p->data[i+1];
		p->data[i+1]=0;
	}
	p->len --;
}

//13 找到key并返回key的位置
int search(sqlist *p,Elem_type key)
{
	if(empty_list(p))
	{
		return -1;
	}
	for(int i=0;i<p->len;i++)
	{
		if(p->data[i]==key)
		{
			return i;
		}
	}
}

//14 打印顺序表中的元素
void show(sqlist *p)
{
	if(empty_list(p))
	{
		return ;
	}
	for(int i=0;i<p->len;i++)
	{
		printf("%d  ",p->data[i]);
	}
	printf("\n");
}

//15 把pos位置的元素返回给e
void get_elem(sqlist *p,int pos,Elem_type *e)
{
	if(empty_list(p))
	{
		return ;
	}
	*e=p->data[pos];
}


//作业第一题 顺序表A中出现的元素 顺序表B中也出现 则将A中的那个元素删除
//给顺序表A赋值
void give_some_data_A(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len ++)
	{
		p->data[i]=i;
	}
}

//给顺序表B赋值
void give_some_data_B(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len ++)
	{
		p->data[i]=i*2;
	}
}
 
//删除表A中含有的和表B相同的元素
void delete_A_and_B(sqlist *A,sqlist *B)
{
	for(int i=0;i<A->len;i++)
	{
		for(int j=0;j<B->len;j++)
		{
			if(A->data[i]==B->data[j])
			{
				delete_pos(A,i);
			}
		}
	}
}


//作业第二题
//将两个顺序表合并


//给顺序表A赋值
void give_some_data_A2(sqlist *p)
{
	p->data[0]=6;
	p->data[1]=11;
	p->data[2]=11;
	p->data[3]=23;
	p->len=4;
}


//给顺序表B赋值
void give_some_data_B2(sqlist *p)
{
	p->data[0]=2;
	p->data[1]=10;
	p->data[2]=12;
	p->data[3]=12;
	p->data[4]=21;
	p->len=5;
}

//将表A和表B的元素全部给表C
void Let_A_and_B_to_C(sqlist *A,sqlist *B,sqlist *C)
{
	if(empty_list(A)||empty_list(B))  //表A和表B不能为空表
	{
		return ;
	}
	for(int i=0;i<A->len;i++)
	{
		if(full_list(C)) //把表A的值赋给表C时 判断表C是否已经满了 如果满了就扩容
		{
			INCR_list(C); //扩容函数
		}
		C->data[i]=A->data[i];
		C->len ++;
	}
	for(int j=0;j<B->len;j++)
	{
		if(full_list(C))//把表B的值赋给表C时 判断表C是否已经满了 如果满了就扩容
		{
			INCR_list(C);//扩容函数
		}
		C->data[A->len+j]=B->data[j];
		C->len ++;
	}
}

//排序函数  表C进行排序
void sort_C(sqlist *p)
{
	if(empty_list(p))//如果表C是空表 就结束排序
	{
		return ;
	}
	for(int j=0;j<p->len-1;j++)
    {
		for(int i=j+1;i<p->len;i++)
        {
			if(p->data[j]>p->data[i])
            {
               int temp=p->data[j];
                p->data[j]=p->data[i];
                p->data[i]=temp;
            }
        }
    }
}


