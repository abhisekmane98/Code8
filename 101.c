#include<stdio.h>
void swap(int*);
void display(int*);
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
void display(int *p)
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d,",*p);
			p++;
		}
		printf("\n");
	}
}

void swap(int *p)
{
	int i,j,q,temp;
	for(i=0;i<=3;i++)
	{
		for(q=0;q<=1;q++)
		{
			for(j=0;j<=3;j++)
			{
				temp=*(p+i*5+j);
				*(p+i*5+j)=*(p+i*5+j+1);
				*(p+i*5+j+1)=temp;
			}	
			
		}		
	}
}







