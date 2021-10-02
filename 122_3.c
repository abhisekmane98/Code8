#include<stdio.h>
int main()
{
	const int a[4]={11,12,13,14};
	*a=5;
	printf("%d",a[0]);
}
