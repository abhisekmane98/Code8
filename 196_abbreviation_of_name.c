#include<stdio.h>
int main()
{
	char s[30],temp[30];
	int i=0,k;
	printf("Enter your name");
	gets(s);
	
	temp[0]=s[i];
	temp[1]='.';
	
	while(s[i]!=' ')
		i++;
	i++;
		
	temp[2]=s[i];
	temp[3]='.';
	
	while(s[i]!=' ')
		i++;
		
	i++;
	k=4;
	
	while(s[i]!='\0')
	{
		temp[k]=s[i];
		i++;
		k++;
	}
	temp[k]='\0';
	printf("%s",temp);
}
