#include <stdio.h>

#define VMAX 21

typedef struct{
	char name[20];
	int height;
	double vision;
}PhysCheck;


double ave_height(const PhysCheck data[], int n)
{
	int i;
	double sum;

	for(i=0; i<n; i++)
	{
		sum += data[i].height;
	}
	return sum/n;
}


void dist_vision(const PhysCheck data[], int n, int dist[])
{
	int i;

	for (i=0; i<n; i++)
	{
		dist[i] = 0;
	}
	
	for (i=0; i<n; i++)
	{
		if(data[i].vision >= 0.0 && data[i].vision < VMAX/10.0)
		{
			dist[(int)(data[i].vision *10)]++;
		}
	}
}

int main()
{
	int i,j;
	PhysCheck x[] = {
		{"aaa", 162, 0.3},
		{"bbb",173,0.7},
		{"ccc",175,2.0},
		{"ddd",171,1.5},
		{"eee",168,0.4},
		{"fff",174,1.2},
		{"ggg",169,0.8}};

	int n = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];

	printf("------PhysCheck------\n    name          height  vision\n");

	for(i-0;i<n;i++)
		printf("%-18.18s%4d%5.1f\n",x[i].name,x[i].height,x[i].vision);
	
	printf("\n ave_height : %5.1f",ave_height(x,n));

	dist_vision(x,n,vdist);
	printf("Vision Dist : \n");
	for(i=0;i<VMAX;i++){
		printf("%3.1f ~ :",i/10.0);
		for(j=0;j<vdist[i];j++){
			printf("*");
		}
		printf("\n");
	}
}
		
