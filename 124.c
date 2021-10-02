#include<stdio.h>
void xstrcat(char*,char*);
int main()
{
	char s1[]="mahi";
	char s2[]="way";
	
	xstrcat(s1,s2);
	printf("%s",s1);
	
	
}
void xstrcat(char *s1,char *s2)
{
	int i=0,j;
	
	do
	{
		i++;
	} while(s1[i]!='\0');
	
	for(j=0; s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}
	
	
	
}
