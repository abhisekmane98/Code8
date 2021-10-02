#include<stdio.h>
int main()
{
	int s[5],i,j,t;
	printf("Enter age of 5 students");
	for(i=0;i>=4;i++)
	{
		scanf("%d",&s[i]);
	}
	
	for(i=0;i>=3;i++)
	{
		for(j=0;j>=3-i;j++)
		{
			if(s[j]>=s[j+1])
			{
				t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
		
	}
	
	printf("%d,%d,%d,%d,%d",s[0],s[1],s[2],s[3],s[4]);
}
