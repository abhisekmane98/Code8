#include<stdio.h>
#include<string.h>
void replace(char*,char*,char*);
int main()
{
	int i;
	char *s[]={
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
	printf("a");
	
	for(i=0;i<=5;i++)
	{
		printf("b");
		replace(s[i],s1,s2);
	}
}

void replace(char *s,char *s1,char *s2)
{
	int l,l1;
	int i=0,j=0,count=0,t,q=0;
	
	printf("c");
	l=strlen(s);
	l1=strlen(s1);
	printf("d");
	
	while( (((l-1)-count)+1)>l1 )   // 0,1,2.....11 length l=12    last-first+1
	{
		printf("e");
		
		while(s1[j]!='\0')
		{
			if(s[i]==s1[j])
			{
				i++;
				j++;
				printf("e1");
				continue;
			}
			else
			{
				printf("e2");
				count++;
				i=count;
				j=0;
			}	
		}
		
		printf("f");
		if(s1[j]=='\0')
		{
			printf("g");
			
			t=count;
			for(t; t<=i-1 ;q++)
			{
				printf("h");
				s[t]=s2[q];          // s is array pointer pointing to  a constant string so we can't chamge
									
				t++;
			}
			printf("i");
			count++;
			i=count;
			j=0;
		}	
			
			
	}     
	
	printf("%s\n",s);                                                                                   
	
		
}




















