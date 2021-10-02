#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,i;
	a=(int*) malloc(4*sizeof(int));
	
	b=a;
	printf("Enter values in array");
	
	for(i=0;i<=3;i++)
	{
		scanf("%d,",&a[i]);		
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d,",*b);
		b++;
	}
}
