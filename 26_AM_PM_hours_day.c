#include<stdio.h>
int main()
{
	int p;
	for(p=1;p<=12;p++)
	{
		printf("%d AM\n",p);
		if(p==12)
		{
			printf("%d PM\n",p);	
		}
	}
	
	for(p=1;p<=12;p++)
	{
		printf("%d PM\n",p);
		if(p==12)
		{
			printf("%d AM\n",p);	
		}
	}
	
	
}
