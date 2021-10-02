#include<stdio.h>
int main()
{
	int x[2][2]={
				  2,3,
				  4,5
					 }, *n=&x;
	printf("%d",*(n+2));				 
	
}
