#include<stdio.h>
void fibbonaci(int,int);
int main()
{
	int old=0,current=1;
	printf("%d,%d,",old,current);
	fibbonaci(old,current);
}

void fibbonaci(int old,int current)
{
	int New,i=1;      
	while(i<=25)
	{
		i++;
		New=old+current;
		printf("%d,",New);
		fibbonaci(current,New);	
	}
	
}
