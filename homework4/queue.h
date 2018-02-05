#define MAXSIZE 10
typedef int Elemtype;

typedef struct queue
{
	Elemtype data[MAXSIZE];
	Elemtype start;
	Elemtype end;
}queue;

void init_que(queue *q);

bool is_full(queue *q);

bool is_empty(queue *q);

void en_que(queue *q,int value);

void get_length(queue *q,int *len);

void de_que(queue *q,int *e);