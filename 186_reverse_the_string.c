#include<stdio.h>
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
	char *t;
	int i,j,l;			
	
	for(i=0;i<=4;i++)
	{	
	
		l=strlen(s[i]);
	    t=s[i]+l-1;
		
		for(j=0; j<=(l/2-1) ;j++)
		{
			printf("b");
			*(s[i]+j) = *t;   //you can't do this it is constant string can't change
			printf("c");
			t--;
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%s\n",s[i]);
	}
}
