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
	int New;
	static int i=1;  // Now i not initialized again
	if(i<=25)
	{
		i++;
		New=old+current;
		printf("%d,",New);
		fibbonaci(current,New);	
	}
	
}
