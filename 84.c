#include<stdio.h>
void display(int [],int);
int main()
{
	int num[6]={21,33,66,23,90,34};
	int j[]=num;
	
	
	int i=0;
	
	for(i=0;i<5;i++)
	{
		printf("%d,",j[i]);
    }
}
