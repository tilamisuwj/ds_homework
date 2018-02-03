#include<stdio.h>
#include<stdlib.h>
#include"sqlist.h"
//1��ʼ��˳���
void init_list(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++)
	{
		p->data[i]=0;
	}
	p->len=0;
	p->list_size=10;
}
//2 ��˳���Ԫ��ֵ
void give_some_data(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len++)
	{
		p->data[i]=i*10;
	}
}


//3 �������ݱ�
void destroy(sqlist *p)
{
	free(p->data);
	p->len=0;
	p->list_size=0;
}

//4 ���˳���
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

//5 �ж�˳����Ƿ�Ϊ��
bool empty_list(sqlist *p)
{
	if(p->len==0)
	{
		return true;
	}
	return false;
}

//6 �ж�˳����Ƿ�Ϊ��
bool full_list(sqlist *p)
{
	if(p->len==p->list_size)
	{
		return true;
	}
	return false;
}

//7 ���˳�����ܳ���
void get_list_num(sqlist *p,Elem_type *num)
{
	*num=p->list_size;
}


//8 ���ݺ���
void INCR_list(sqlist *p)
{
	p->data=(Elem_type *)realloc(p->data,sizeof(int)*(p->list_size+INCR_SIZE));
	p->list_size=p->list_size+INCR_SIZE;
}

//9 ��β������Ԫ��
void insert_tail(sqlist *p,Elem_type value)
{
	if(full_list(p))
	{
		/*p->data=(Elem_type *)realloc(p->data,sizeof(int)*(p->list_size+INCR_SIZE));   //��ʼ����  
		p->list_size=p->list_size+INCR_SIZE;  */  //��ǰ����+���ݳ���
		INCR_list(p);
	}
	p->data[p->len]=value;   //��β������ֵ
	p->len++ ;
}

//10 ��ͷ������Ԫ��
void insert_head(sqlist *p,Elem_type value)
{
	if(full_list(p))
	{
		p->data=(Elem_type *)realloc(p->data,sizeof(Elem_type)*(p->list_size+INCR_SIZE));   //��ʼ����  
		p->list_size=p->list_size+INCR_SIZE;    //��ǰ����+���ݳ���
	}
	for(int i=p->len-1;i>=0;--i)
	{
		p->data[i+1]=p->data[i];
	}
	p->data[0]=value;
	p->len++;
}

//11 ����������ɾ��������
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

//12 ����λ��ɾ��Ԫ��
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

//13 �ҵ�key������key��λ��
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

//14 ��ӡ˳����е�Ԫ��
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

//15 ��posλ�õ�Ԫ�ط��ظ�e
void get_elem(sqlist *p,int pos,Elem_type *e)
{
	if(empty_list(p))
	{
		return ;
	}
	*e=p->data[pos];
}


//��ҵ��һ�� ˳���A�г��ֵ�Ԫ�� ˳���B��Ҳ���� ��A�е��Ǹ�Ԫ��ɾ��
//��˳���A��ֵ
void give_some_data_A(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len ++)
	{
		p->data[i]=i;
	}
}

//��˳���B��ֵ
void give_some_data_B(sqlist *p)
{
	for(int i=0;i<INIT_SIZE;i++,p->len ++)
	{
		p->data[i]=i*2;
	}
}
 
//ɾ����A�к��еĺͱ�B��ͬ��Ԫ��
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


//��ҵ�ڶ���
//������˳���ϲ�


//��˳���A��ֵ
void give_some_data_A2(sqlist *p)
{
	p->data[0]=6;
	p->data[1]=11;
	p->data[2]=11;
	p->data[3]=23;
	p->len=4;
}


//��˳���B��ֵ
void give_some_data_B2(sqlist *p)
{
	p->data[0]=2;
	p->data[1]=10;
	p->data[2]=12;
	p->data[3]=12;
	p->data[4]=21;
	p->len=5;
}

//����A�ͱ�B��Ԫ��ȫ������C
void Let_A_and_B_to_C(sqlist *A,sqlist *B,sqlist *C)
{
	if(empty_list(A)||empty_list(B))  //��A�ͱ�B����Ϊ�ձ�
	{
		return ;
	}
	for(int i=0;i<A->len;i++)
	{
		if(full_list(C)) //�ѱ�A��ֵ������Cʱ �жϱ�C�Ƿ��Ѿ����� ������˾�����
		{
			INCR_list(C); //���ݺ���
		}
		C->data[i]=A->data[i];
		C->len ++;
	}
	for(int j=0;j<B->len;j++)
	{
		if(full_list(C))//�ѱ�B��ֵ������Cʱ �жϱ�C�Ƿ��Ѿ����� ������˾�����
		{
			INCR_list(C);//���ݺ���
		}
		C->data[A->len+j]=B->data[j];
		C->len ++;
	}
}

//������  ��C��������
void sort_C(sqlist *p)
{
	if(empty_list(p))//�����C�ǿձ� �ͽ�������
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


