
#include"list_h.h"

//初始化
void init_list(sqlist *p)
{
	for(int i=0;i<MAXSIZE;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
}
//给值
void give_some_data(sqlist *p)
{
	if(p->len==MAXSIZE)
	{
		return ;
	}
	else if(p->len==0)
	{
		for(int i=0;i<5;i++,p->len++)
		{
			p->data[i]=10*i;
		}
	}
}


//查看表是否满
bool full_list(sqlist *p)
{
	if(p->len==MAXSIZE)
	{
		return true;
	}
	return false;
}

//查看表是否空
bool empty_list(sqlist *p)
{
	if(p->len==0)
	{
		return true;
	}
	return false;
}

//获得表中元素的个数
void get_list_num(sqlist *p,Elemtype *num)
{
	*num=p->len;
}


//尾插
void insert_tail(sqlist *p,Elemtype value)
{
	if(full_list(p))
	{
		return ;
	}
	else
		p->data[p->len]=value;
	p->len ++;
}

//头插
void insert_head(sqlist *p,Elemtype value)
{
	if(full_list(p))
	{
		return ;
	}
	for(int i=p->len-1;i>=0;--i)
	{
		p->data[i+1]=p->data[i];
	}
	p->data[0]=value;
	p->len ++;
}

//找到value元素并将它删除
void delete_value(sqlist *p,Elemtype value)
{
	if(empty_list(p))
	{
		return ;
	}
	for(int i=0;i<p->len;i++)
	{
		if(p->data[i]==value)
			{
				for(int j=i;j<p->len;j++)
				{
					p->data[j]=p->data[j+1];
					p->data[j+1]=0;
				}
				p->len --;
			}
	}
	
}

//删除pos位置上的元素
void delete_pos(sqlist *p,int pos)
{
	if(empty_list(p)||pos>p->len)
	{
		return ;
	}
	for(int i=pos;i<p->len;i++)
	{
		p->data[i]=p->data[i+1];
		p->data[i+1]=0;
	}
	p->len --;
}

//查找key的值并返回key值的位置
int search(sqlist *p,Elemtype key)
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

//显示当前表中的元素
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
}

//查找值并把值返回出来
void get_elem(sqlist *p,int pos,Elemtype *e)
{
	if(p->len==0||pos>p->len)
	{
		return ;
	}
	*e=p->data[pos];
}


//找最大值 并将最大值返回出来

void max_elem(sqlist *p,Elemtype *max)
{
	if(p->len==0)
	{
		return ;
	}
	*max=p->data[0];
	for(int i=0;i<p->len;i++)
	{
		if(*max  < p->data[i])
		{
			*max=p->data[i];
		}
	}

}

//销毁表==清空表
void clear_list(sqlist *p)
{
	if(empty_list(p))
	{
		return ;
	}
	for(int i=0;i<p->len;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
}

