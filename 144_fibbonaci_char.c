#include<stdio.h>
#include<string.h>
int main()
{
	char s3[50],s2[]="b",s1[]="a";
	int i;
	for(i=0;i<=5;i++)
	{
		strcpy(s3,s2);
		strcat(s3,s1);
		printf("%s\n",s3);
		
		strcpy(s1,s2);
		strcpy(s2,s3);
		
		
	}
}
