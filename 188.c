#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"vedant",
						"ruturaj"			
									};
									
	char *temp;
	int i,j;
	temp=(char*)calloc(15,sizeof(char)); // we are creating once so after free(temp) there will be no array
	for(i=0;i<=4;i++)
	{
	
		for(j=0; *(s[i]+j)!=0 ; j++ )
		{
			temp[j]= *(s[i]+j);
		}
		
		strrev(temp);
		printf("%s\n",temp);
		free(temp);
	}
	
}
