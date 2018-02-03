
#include"list_h.h"

//��ʼ��
void init_list(sqlist *p)
{
	for(int i=0;i<MAXSIZE;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
}
//��ֵ
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


//�鿴���Ƿ���
bool full_list(sqlist *p)
{
	if(p->len==MAXSIZE)
	{
		return true;
	}
	return false;
}

//�鿴���Ƿ��
bool empty_list(sqlist *p)
{
	if(p->len==0)
	{
		return true;
	}
	return false;
}

//��ñ���Ԫ�صĸ���
void get_list_num(sqlist *p,Elemtype *num)
{
	*num=p->len;
}


//β��
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

//ͷ��
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

//�ҵ�valueԪ�ز�����ɾ��
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

//ɾ��posλ���ϵ�Ԫ��
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

//����key��ֵ������keyֵ��λ��
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

//��ʾ��ǰ���е�Ԫ��
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

//����ֵ����ֵ���س���
void get_elem(sqlist *p,int pos,Elemtype *e)
{
	if(p->len==0||pos>p->len)
	{
		return ;
	}
	*e=p->data[pos];
}


//�����ֵ �������ֵ���س���

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

//���ٱ�==��ձ�
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

