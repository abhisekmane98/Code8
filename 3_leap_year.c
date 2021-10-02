#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year");
	scanf("%d",&y);
	// year is leap if if it is non century yrar and divisible by 4
	// year is leap if it is century yrar and divisible by 400
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				printf("leap year");
			else
				printf("ordinary year");
		else
			printf("leap year");
	else 
		printf("ordinary year");
}
