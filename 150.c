#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char *a="Napoleon",*b="napoleon";
	k=strdup(b,a);
	printf("%d",k);
}
