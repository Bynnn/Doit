#ifndef ___MyIntStack
#define ___MyIntStack


typedef struct {
	int max;
	int ptr1;
	int prt2;
	int *stk1;
	int *stk2;
} MyIntStack;

int Initialize(MyIntStack *s1, int max);

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


