#include<stdio.h>
void swap(int*);
int main()
{
	int p[4][5]={
					12,23,1,4,7,
					45,2,9,11,21,
					28,32,92,17,22,
					24,33,52,5,6
				};
	int i,j;
	swap(p);
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d,",p[i][j]);
		}
		printf("\n");
	}
}
void swap(int *p)   // array pointer
{
	int k,i,tt,t,j;
	for(k=0;k<=3;k++)
	{
		for(i=0;i<=1;i++)
		{
			t=*(p+k*5+0);
			
			for(j=0;j<=3;j++)
			{
				tt=*(p+k*5+j);
				printf("%d,%d",*(p+k*5+j),*(p+k*5+j+1));
				getch();
			 
				*(p+k*5+j)=*(p+k*5+j+1);
				*(p+k*5+j+1)=tt;
			}
			*(p+k*5+j)=t;
		}
	}
}
