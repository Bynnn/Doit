/* Deck / deque / double ended queue */

#ifndef ___MyDeck
#define ___MyDeck

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
} MyDeck;

int Initialize(IntQueue *q, int max);

int EnqueF(IntQueue *q, int x);

int EnqueR(IntQueue *q, int x);

int DequeF(IntQueue *q, int *x);

int DequeR(IntQueue *q, int *x);

int Peek(const IntQueue *q, int *x);	//show both F :    R : 

void Clear(IntQueue *q);

int Capacity(const IntQueue *q);

int Size(const IntQueue *q);

int IsEmpty(const IntQueue *q);

int IsFull(const IntQueue *q);

int Search(const IntQueue *q, int x);

void Print(const IntQueue *q);

void Terminate(IntQueue *q);

#endif

