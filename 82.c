#include<stdio.h>
void display(int [],int);
int main()
{
	int num[6]={21,33,66,23,90,34};
	display(num,6);
}

void display(int j[],int n)
{
	int i=0;
	for(i=0;i<=n-1;i++)
	{
		printf("%d,",j[i]);
    }
}
