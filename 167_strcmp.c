#include<stdio.h>
#include<string.h>

int main()
{
	char *str[]={
					"We will teach you how to...",
		            "Move a mountain",
		            "Leval a building",
		            "Erase the past",
		            "Make a million",
		            "...all through C!"
					
																};
	char ch[40];
	int i;
	
	printf("Enter a string\n");
	gets(ch);
	
	for(i=0;i<=5;i++)
	{
		if(strcmp(str[i],ch)==0)
		{
			printf("strings are same");
			break;
		}
		
	}		
	if(i==6)
		printf("Strings are not same");	
			
}	
