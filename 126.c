#include<stdio.h>
int main()
{
	char c,d;
	printf("Enter a character");  // space,enter
	scanf("%c%c",&c,&d);
	printf("%d,%c",c,c);
	printf("%d,%c",d,d);
	getch();
}
