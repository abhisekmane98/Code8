#include<stdio.h>

void check_sum(char*);

int main()
{
	char p[11];
	printf("Enter isbn-10 number");
	scanf("%s",p);
	printf("%s\n",p);
	
	
	check_sum(p);
}

void check_sum(char *p)
{
	int a,c=10,s=0,i;
	for(i=0;i<=8;i++)
	{
		a=p[i];
		a=a-48;
		printf("%d,",a);
	
		s=s+a*c;
		c--;
	}
	printf("\n");
	s=s%11;
	s=11-s;
	
	a=p[i];
	a=a-48;
	
	if(s==a)
		printf("valid");
	else
		printf("invalid");
	
}
