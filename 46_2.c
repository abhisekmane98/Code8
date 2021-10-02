#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char a[]="saurabh";
	k=length(a);
	printf("%d",k);
	
}
length(char *p)
{
	int k;
	k=strlen(p);
	return k;
}
