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
		
		for(;j<=2;j++)  // error we are placing j++ here 
		{
			if(s[i]==p[j]) // we can't get p[0] to check due j++ before this
			{
				i++;       // we are not placing j++ here
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
				j=0; // error 
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
			j=0;// error
		}	
	}// while
	printf("%s",temp);
}


