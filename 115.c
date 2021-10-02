#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,i;
	a=(int*) calloc(4,sizeof(int));
	

	printf("Enter values in array");
	
	for(i=0;i<=3;i++)
	{
		printf("%d,",*a);
		a++;
	}
}
