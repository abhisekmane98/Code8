#include<stdio.h>
#include<string.h>

int main()
{
	int v;
	char s[20],*r,ch='u';
	
	printf("Enter a string ");
	scanf("%s",s);
	
	r=strchr(s,ch);
	
	printf("%s,%s",r,s);
	
}
