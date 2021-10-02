#include<stdio.h>
#include<stdlib.h>
int main()
{	
	char *s,*p;

	s=(char*)calloc(80,sizeof(char));
	p=(char*)calloc(80,sizeof(char));
	
	char *m=p;
	printf("Enter a line");
	gets(s);
	
	while(*s!='\0')
	{
		if(*s=='a'|| *s=='e'|| *s=='i'|| *s=='o'|| *s=='u')
		{
			s++;
		}
		else
		{
			*p=*s;
			p++;
			s++;
		}
	}
	printf("%s",m);
}
