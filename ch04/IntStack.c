#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(IntStack *s, int max)
{
	s->ptr=0;
	if((s->stk=calloc(max,sizeof(int)))==NULL)
	{
		s->max=0;	 // 존재하지 않는 배열에 대한 접근을 막기 위해
		return -1;
	}

	s->max=max;
	return 0;
}

int Push(IntStack *s, int x)
{
	if(s->ptr >= s->max)
		return -1;

	s->stk[s->ptr++] = x;
	return 0;
}

int Pop(IntStack *s, int *x)
{
	if(s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr--];
	return 0;
}

int Peek(const IntStack *s, int *x)
{
	if(s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr-1];
	return 0;
}

void Clear(IntStack *s)
{
	s->ptr = 0;
}
// 스택 포인터를 바탕으로 모든 작업이 이루어지므로 배열의 요소를 바꿀 필요는 없다.

int Capacity(const IntStack *s)
{
	return s->max;
}

int Size(const IntStack *s)
{
	return s->ptr;
}

int isEmpty(const IntStack *s)
{
	return (s->ptr<=0);
}

int IsFull(const IntStack *s)
{
	return (s->ptr >= s->max);
}

int Search(const IntStack *s, int x)
{
	int i;

	for(i= s->ptr-1; i>=0; i--){
		if(s->stk[i] == x)
			return i;
	}
	return -1;
}

void Print(const IntStack *s)
{
	int i;
	for(i=0; i < s->ptr; i++)
		printf("%d", s->stk[i]);
	printf("\n");
}

void Terminate(IntStack *s)
{
	if(s->stk != NULL)
		free(s->stk);	//calloc
	s->max = s->ptr = 0;

}
