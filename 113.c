#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,i;
	a=(int*) malloc(4*sizeof(int));
	
	printf("Enter values in array");
	
	b=a;
	
	for(i=0;i<=3;i++)
	{
		scanf("%d,",a);
		a++;		
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d,",b[i]);
	}
}
