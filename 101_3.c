#include<stdio.h>
void swap(int(*)[5]);
void display(int(*)[5]);
int main()
{
	int p[4][5]={
					12,23,1,4,7,
					45,2,9,11,21,
					28,32,92,17,22,
					24,33,52,5,6
				};
	swap(p);
	display(p);
}

void display(int (*p)[5])
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		   
		for(j=0;j<=4;j++)
		{
			printf("%d,",*(*p+j));
		}
		printf("\n");
		p++;
		
	}
}

void swap(int(*p)[5])
{
	int i,j,temp,q;
	for(i=0;i<=3;i++)
	{
		for(q=0;q<=1;q++)
		{
			for(j=0;j<=3;j++)
			{
				temp=*(*p+j);
				*(*p+j)=*(*p+j+1);
				*(*p+j+1)=temp;
			}
		}
		p++;
		
	}
}
