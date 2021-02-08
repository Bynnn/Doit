#include <stdio.h>
#include <stdlib.h>
#include "MyIntStack.h"

int Initialize(MyIntStack *s, int max)
{
	s->ptr1=0;
	s->ptr2=max-1;
	if((s->stk1=callox(max,sizeof(int))) == NULL)
	{
		s->max = 0;
		return -1;
	}

int Push1(MyIntStack *s, int x);

int Push2(MyIntStack *s, int x);

int Pop1(MyIntStack *s, int *x);

int Pop2(MyIntStack *s, int *x);

int Peek1(const MyIntStack *s, int *x);

int Peek2(const MyIntStack *s, int *x);

void Clear(MyIntStack *s);

int Capacity(const MyIntStack *s);

int Size1(const MyIntStack *s);

int Size2(const MyIntStack *s);

int IsEmpty1(const MyIntStack *s);

int IsEmpty2(const MyIntStack *s);

int ISFull1(const MyIntStack *s);

int ISFull2(const MyIntStack *s);

int Search1(const MyIntStack *s, int x);

int Search2(const MyIntStack *s, int x);

void Print(const MyIntStack *s);

void Terminate(MyIntStack *s);
#endif


