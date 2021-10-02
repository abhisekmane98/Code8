#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d,%d",a,b);
}
swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
