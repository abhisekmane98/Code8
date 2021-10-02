#include<stdio.h>
#include<string.h>

int xstrcmp(char*,char*);

int main()
{
	char s1[20],s2[20];
	int value;
	printf("Enter two strings");
	scanf("%s%s",s1,s2);
	
	value=xstrcmp(s1,s2);
	printf("%d",value);
	
}

int xstrcmp(char *s1,char *s2)
{
	int i;
	
	for(i=0; s1[i]=='\0' && s2[i]=='\0' ;i++)
	{
		if(s1[i]!=s2[i])
		{
			break;
		}
	}
		
	if(s1[i]=='\0' && s2[i]=='\0')
		return 0;
	else
	    return("%d",s1[i]-s2[i]);
		    
}

