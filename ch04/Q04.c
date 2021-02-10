// IntQueue.c 

int Search2(const IntQueue &q, int x)
{
	int i;
	int pos;
	for(i = 0; i < q->num; i++)
	{
		if(q->que[i] == x)
		{
			if((pos = x - front)<0)
				pos += p->max;
			return pos; 
		}
	}
	return -1;
}
