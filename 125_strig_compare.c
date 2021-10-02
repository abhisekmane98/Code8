#include<stdio.h>
#include<string.h>

void xstrcmp(char*,char*);

int main()
{
	char s1[20],s2[20];
	printf("Enter two strings");
	scanf("%s%s",s1,s2);
	
	xstrcmp(s1,s2);
	
}

void xstrcmp(char *s1,char *s2)
{
	int i;
	
	if(strlen(s1)==strlen(s2))
	{
		
		for(i=0; s1[i]!='\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				break;
			}
		}
		
		if(s1[i]=='\0')
			printf("Same");
		else
		    printf("Not Same");
		    
	}
	else
	{
		printf("Not Same");
	}
}

