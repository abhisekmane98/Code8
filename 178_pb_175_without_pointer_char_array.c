#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void replace(char(*)[40],char*,char*);
int main()
{
	int i;
	char s[6][40]={
					"We will teach you how to...",
		            "Move a mountain",
		            "Leval a building",
		            "Erase the past",
		            "Make a million",
		            "...all through C!"
												};

	char s1[10],s2[10];												
	printf("Enter a string s1(to search) and s2(to replace) both string length must be same");
	scanf("%s%s",s1,s2);

	
	for(i=0;i<=5;i++)
	{
		
		replace(s+i,s1,s2);
	}
	
}

void replace(char (*s)[40],char *s1,char *s2)
{
	int l,l1;
	int i=0,j=0,k=0,count=0,q=0,t;
	int r;
	char *temp;

	temp=(char*)calloc(40,sizeof(char));
	
	// Moved block
	for(r=0;s[r][k]!='\0';k++)
	{
		temp[k]=s[r][k];
	}
	
	l=strlen(s);
	l1=strlen(s1);



	
	while( (((l-1)-count)+1)>l1 )   
	{
		
		while(s1[j]!='\0')        
		{
			
			if(s[r][i]==s1[j])
			{
				
				i++;
				j++;
		
				continue;
			}
			else
			{
			
				count++;
			
				if( (((l-1)-count)+1)<l1 )
					break;
					
				i=count;
				j=0;
			}	
			
		}

		
		if(s1[j]=='\0')       
		{
			
			t=count;
			
			for( ;t<=i-1;q++)
			{	
				temp[t]=s2[q];         				
				t++;	
			}
			
			count++;
			i=count;
			j=0;
			
		}	
  			
	}     
	printf("%s\n",temp);          
	r++; // round                                                                      
		
}




















