#include<stdio.h>
int main()
{
	int s[]={1,2,3,4,5},i; 
	int *p=s;
	*p=278;
	i=0;
	printf("%d",*p);
	
}
