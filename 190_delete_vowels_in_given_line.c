// basically i not deleted i put gap there
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	char v[]={'a','e','i','o','u','\0'};
	char *s,b=' ';
	int i,j;
	s=(char*)calloc(80,sizeof(char));
	
	printf("Enter a line");
	gets(s);
	
	for(i=0; s[i]!='\0'; i++)
	{
		for(j=0;j<=4;j++)
		{
			if(s[i]==v[j])
				s[i]=b;
		}
		
	}
	printf("%s",s);
	
}
