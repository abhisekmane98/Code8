#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

	
	for(i=0;i<=5;i++)
	{
		
		replace(s[i],s1,s2);
	}
	
}



void replace(char *s,char *s1,char *s2)
{
	int l,l1;
	int i=0,j=0,k=0,count=0,q=0,t;
	char *temp;
	temp=(char*)calloc(40,sizeof(char));
	
	printf("%s",s);

	l=strlen(s);
	l1=strlen(s1);



	
	while( (((l-1)-count)+1)>l1 )   
	{
		
		while(s1[j]!='\0')        
		{
			
			if(s[i]==s1[j])
			{
				printf("a");
				i++;
				j++;
		
				continue;
			}
			else
			{
			
				count++;
				printf("%d,",count);
				i=count;
				j=0;
			}	
			
		}
		printf("\n%d,%d,%d,%c,%c,%d,%d",i,j,count,s[i],s1[j],s[i],s1[j]);
		getch();
		if(s1[j]=='\0')       
		{
			
			for( ;s[k]!='\0';k++)
			{
				temp[k]=s[k];
			}
			
			t=count;
			
			for( ;t<=i-1;q++)
			{	
				temp[t]=s2[q];         				
				t++;	
			}
			
			count++;
			i=count;
			j=0;
			printf("i");
			
		}	
  		printf("j");
			
	}     
	printf("k");
	printf("%s\n",temp);                                                                                
		
}




















