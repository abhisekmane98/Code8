#include<stdio.h>
int main()
{
	int a[5],*p,i;
	p=&a;
	printf("Enter 5 Numbers");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",*(p+i));
	}
	getch();
	
	
}
