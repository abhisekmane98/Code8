#include<stdio.h>
void check_sum(int*);

int main()
{
	int p[10],i;
	printf("Enter isbn-10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&p[i]);
	}
	check_sum(p);
}

void check_sum(int *p)
{
	int c=10,s=0,i;
	for(i=0;i<=8;i++)
	{
		s=s+p[i]*c;
	}
	s=s%11;
	if(s==p[9])
		printf("valid ISBN number");
	else
		printf("invalid ISBN number");
}
