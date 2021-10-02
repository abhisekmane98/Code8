#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void vanish(char*,char*);

int main()
{
	char s[50],*temp,*p="the";
	printf("a");
	gets(s);
	printf("b");
	vanish(s,p);
}

void vanish(char *s,char *p)
{
	int i=0,j=0,k=0,count=0,l;
	char *temp=(char*)calloc(50,sizeof(char));
	printf("c");
	l=strlen(s);	
	
	while( (((l-1)-count)+1)>=3 )
	{
		printf("d");
		
		for(;j<=2;j++)
		{
			if(s[i]==s[j])
			{
				continue;
			}
			else
			{
				temp[k]=s[count];
				k++;
				count++;
				if( (((l-1)-count)+1)<3 )
					break;
				printf("e");
				i=count;
				j=0;  
			}
			
		}// j
		if(j==3)
		{
			printf("f");
			count+=3;
			if( (((l-count)-3)+1)<3 )
					break;
			i=count;
			j=0;    
		}
		
	}// while
	
	printf("%s",temp);
}


