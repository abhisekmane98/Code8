#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s="shoaib",*p;
	p=(char*)(calloc(20,sizeof(char)));
	p[0]='k';
	p[1]='a';
	p[2]='r';
	//p[3]='\0';
	p="king";
//	s="Shoaib";
	//s="kdjfkj";
//	p[2]='a';
	printf("%s",p);
}
