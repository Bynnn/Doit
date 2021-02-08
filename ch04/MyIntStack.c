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
		return -1;	// fail to create
	}
	return 0;
}

int Push1(MyIntStack *s, int x)
{
	if(s->ptr1 >= s->ptr2)
		return -1;
	
	s[s->ptr1++] = x;
	return 0;
}


int Push2(MyIntStack *s, int x)
{
	if(s->ptr1 >= s->ptr2)
		return -1;
	s[s->ptr2--] = x;
	return 0;
}

int Pop1(MyIntStack *s, int *x)
{
	if(s->ptr1 <= 0)
		return -1;
	x=s[s->ptr1--];
	return 0;
}

int Pop2(MyIntStack *s, int *x)
{
	if(s->ptr2 <= ptr1)
		return -1;
	x=s[s->ptr2++];
	return 0;
}

int Peek1(const MyIntStack *s, int *x)
{
	 if(s->ptr1 <= 0)
                return -1;
        x=s[s->ptr1];
        return 0;
}

int Peek2(const MyIntStack *s, int *x)
{
	if(s->ptr2 <= ptr1)
                return -1;
        x=s[s->ptr2];
        return 0;
}

void Clear(MyIntStack *s)
{
	s->ptr1 = 0;
	s->ptr2 = s->max;
}

int Capacity(const MyIntStack *s)
{
	return s->max;
}

int Size1(const MyIntStack *s)
{
	return (s->ptr1)+1;
}

int Size2(const MyIntStack *s)
{
	return (s->max)-(s->ptr2);
}

int IsEmpty1(const MyIntStack *s)
{
	return s->ptr1 == 0;
}

int IsEmpty2(const MyIntStack *s)
{
	return s->ptr2 == s->max;
}

int ISFull1(const MyIntStack *s)
{
	return s->ptr1 >= s->ptr2;
}

int ISFull2(const MyIntStack *s)
{
	return s->ptr2 >= ptr1;
}

int Search1(const MyIntStack *s, int x)
{
	int i;
	for(i=0;i<s->ptr1;i++)
	{
		if(x == s[i])
			return i;
	}
	return -1;
}

int Search2(const MyIntStack *s, int x)
{
	int i;
	for(i=s->max; i>ptr1; i--)
	{
		if(x == s[i])
			return i;
	}
	return -1;
}

void Print(const MyIntStack *s)
{
	int i;

	printf("stack 1: ");
	for(i=0; i<s->ptr1; i++)
	{
		printf("%d ", s[i]);
	}

	printf("\nstack 2: ");
	for(i=s->max; i>ptr2; i--){
		printf("%d ",s[i]);
	}
	printf("\n");
}

void Terminate(MyIntStack *s)
{
	if(s->stk != NULL)
		free(s->stk);	//calloc
	s->max = s->ptr1 = s->ptr2 = 0;
}
