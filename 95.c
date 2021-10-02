#include<stdio.h>
int main()
{
	int s[4][2]={
					{1234,56},
					{1212,33},
					{1434,80},
					{1312,78}
				};
	int *n=&s+1;
	printf("%d,%d,%d\n",n,*n,n+2);			
	
	//printf("%d,%d,%d", (s[0]+2), *(s+2), s[2] ); // we do not require a pointer to do this as we are derefrencing this using a pointer     
     
				
}
