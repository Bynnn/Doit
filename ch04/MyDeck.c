/* Deck / deque / double ended queue */

#include <stdio.h>
#include <stdlib.h>
#include "MyDeck.h"

int Initialize(IntQueue *q, int max)
{
	 q->num = q->front = q->rear =0;
	 if((q->que=calloc(max,sizeof(int)))==NULL)
	 {
		 q->max = 0;
		 return -1;
	 }
	 q->max = max;
	 return 0;
}

int EnqueF(IntQueue *q, int x)
{
	if(q->front <= 0)
		return -1;
	else
	{
		q->num++;
		q->que[q->front++] = x;
		return 0;
	}
}

int EnqueR(IntQueue *q, int x)
{
	if(q->rear >= max)
		return -1;
	else
	{
		q->num++;
		q->que[q->rear++] = x;
		return 0;
	}
}

int DequeF(IntQueue *q, int *x)
{
	if(q->front >= q->rear)
		return -1;
	else
	{
		q->num--;
		x = q->que[q->front--];
		return 0;
	}
}

int DequeR(IntQueue *q, int *x)
{
	if(q->rear <= q->front)
		return -1;
	else
	{
		q->num--;
		x=q->que[q->rear--];
		return 0;
	}
}

int PeekF(const IntQueue *q, int *x)
{
	if(q->front < 0)
		return -1;
	return q->[q->front];
}

int PeekR(const IntQueue *q, int *x)
{
	if(q->rear > q->max
	return q->rear;
}
	
void Clear(IntQueue *q)
{
	q->rear = q->front = q->num = 0;
	
}

int Capacity(const IntQueue *q)
{
	return q->max;
}

int Size(const IntQueue *q)
{
	return q->num;
}

int IsEmpty(const IntQueue *q)
{
	return (q->num == 0);
}

int IsFull(const IntQueue *q)
{
	return (q->num == q->max);
}

int Search(const IntQueue *q, int x)
{
	int i;
	for(i=0;i<q->num;i++)
	{
		if(x == q->que[i])
			return i;
	}
	return -1;
}

void Print(const IntQueue *q)
{
	int i;

	printf("\n");
	for(i=0;i<q->num;i++)
	{
		printf("\t[%d] : %d",i,q->que[i]);
	}
}

void Terminate(IntQueue *q)
{
	free(q->que);
	q->max = q->num = q->front = q->rear = 0;
}


