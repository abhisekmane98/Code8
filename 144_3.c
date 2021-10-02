#include<stdio.h>
#include<stdlib.h>

void xtrcpy(char*,char*);
int main()
{
	int i;
	char *s1="a", *s2="bonapart", *temp;
	
	
	for(i=0;i<=5;i++)
	{	
		xtrcpy(s2,temp);  // step 1 s2 stores in temp
		
	}
	
}

void xtrcpy(char *s2, char *temp)
{
	int i;
	temp=(char*)calloc(20,sizeof(char)); // important step to avoid creating array with help of []

	for(i=0;s2[i]!='\0';i++)
	{
		temp[i]=s2[i];
	}
	
}
