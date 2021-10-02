#include<stdio.h>
#include<string.h>
int main()
{
	char s[5][20]={
					"Napoleon",	
					"Agustus",
					"kristen",	
					"Tom",
					"Bella"		
								};	
	char *p;
	
	strcpy(s[2],s[3]);

	printf("%s",&s[2][0]);
	
	
}
