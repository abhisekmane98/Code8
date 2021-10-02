#include<stdio.h>
char xtract(char*,int,int);
int main()
{
	char s[20];
	int p,n;
	
	printf("Enter a string");
	scanf("%s",s);
	
	printf("Enter position(p) and how many letters you want after that(n)");
	scanf("%d%d",p,n);
	printf("jk");
	xtract(s,p,n);
}

char xtract(char *s,int p,int n)
{
	int i;
	if(n==0)
	{
		printf("%s",&s[p-1]);
	}
	else
	{
		printf("j");
		for(i=p-1;i<=p-1+n-1;i++)
		{
			printf("%c",s[i]);
		}
	}
}



