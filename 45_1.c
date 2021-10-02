// try to find out an error
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
	int i;
	
	for(i=0;i<=3;i++)
	{
		for(i=0;i<=3-i;i++)
		{
			int t;
			if(*(p+i)>*(p+i+1))
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
	
	for(i=0;i<=4;i++)
	{
		printf("%d ",*(p+i));
	}
	
}
