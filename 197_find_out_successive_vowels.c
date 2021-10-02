#include<stdio.h>
int main()
{
	char s[30];
	int i=0,count=0;
	printf("Enter a string\n");
	gets(s);
	
	for(i=0;s[i+1]!='\0';i++)
	{
		if( (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')&&(s[i+1]=='a'|| s[i+1]=='e'|| s[i+1]=='i'|| s[i+1]=='o'|| s[i+1]=='u') )
			count++;
	}
	printf("%d",count);
}
