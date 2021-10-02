#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void vanish(char*,char*);

int main()
{
	char s[50];
	char *p="the";
	
	printf("Enter a line\n");
	gets(s);
	
	vanish(s,p);
}

void vanish(char *s,char *p)
{
	int i=0,j=0,k=0,count=0,l;
	char *temp=(char*)calloc(50,sizeof(char));

	l=strlen(s);	
	
	while( (((l-1)-count)+1)>=3 )
	{
		
		for(;j<=2;)  
		{
			if(s[i]==p[j]) 
			{
				i++;       
				j++;
				continue;
			}
			else
			{
				temp[k]=s[count];
				k++;
				count++;
				
				if( (((l-1)-count)+1)<3 )
				{
					while(s[count]!='\0')
					{
						temp[k]=s[count];
						count++;
						k++;
					}	
					break;
				}
				
				i=count;
				j=0; 
			}
			
		}// j
		
		if(j==3)
		{
			count+=3;
		
			if( (((l-1)-count)+1 ) <3 )
			{
				while(s[count]!='\0')
				{
				//	printf("a");
					temp[k]=s[count];
				//	printf("b");
					count++;
					k++;
				}
				break;
			}
			i=count;
			j=0;
		}	
	}// while
	printf("%s",temp);
}


