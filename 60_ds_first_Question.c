#include<stdio.h>
void move(int,char,char,char);
int main()
{
	int n=4;
	char a,b,c;
	move(n,a,b,c);
}

void move(int n,char a, char b, char c)
{
	if(n==1)
	{
		printf("move %c to %c\n",a,c);
	}
	else
	{
		move (n-1, a, b, c);
		move(1, a, " ", c);
		move(n-1, a, b, c);
	}
}
