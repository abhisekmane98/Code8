#include<stdio.h>
#include<string.h>

int main()
{
	int v;
	char s[20],ch='u';
	
	printf("Enter a string ");
	scanf("%s",s);
	
	strset(s,ch);
	
	printf("%s",s);
	
}
