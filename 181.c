#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void replace(char(*)[40],char*,char*);
int main()
{
	int i;
	char s[6][40]={
					"We will teach you how to...",
		            "Move a mountain",
		            "Leval a building",
		            "Erase the past",
		            "Make a million",
		            "...all through C!"
												};
	printf("%d",strlen(s+2) );										
}
