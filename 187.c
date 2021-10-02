#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"vedant",
						"ruturaj"			
									};
									
	char *temp;
	temp=(char*)calloc(15,sizeof(char));
	printf("a");
	strrev(s[0]); // you can't do this
	printf("b");
	printf("%s",s);
}
