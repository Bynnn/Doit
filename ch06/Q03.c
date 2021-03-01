

int is_sorted(const int a[], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=n-1; j>i;j--)
		{
			if(a[j-1] > a[j])
			{
				return 0;
			}
		}
	}
	return 1;
}
