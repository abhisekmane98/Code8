#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[100]="a",s2[100]="b",*temp;
	
	for(i=3;i<=7;i++)
	{
		
		strcpy(temp,s2);        
		   
		strcat(s2,s1);
		
		strcpy(s1,temp);
		printf("%s",s1);    
		getch();           
	
		printf("%d. %s\n",i,s2);
	}
}
