#include<stdio.h>

void input(int*);
void display(int*);
void sort(int*);

int main()
{
	int a[5];
	input(&a[0]);
	display(&a[0]);
	sort(&a[0]);	
}

void input(int *p)
{
	int i;
	printf("Enter 5 Numbers");	
	for(i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
}

void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}

void sort(int *p)
{
	int i,j,t;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3-i;j++)   // see here j in last program i placed i
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%d ",*(p+i));
	}
	
}
