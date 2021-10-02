#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year");
	scanf("%d",&y);
	
	y%4==0 ? (   y%100==0 ? ( y%400==0 ? printf("leap Year") : printf("ordinary year") ) : printf("leap Year")   ) : printf("ordinary year");
}
