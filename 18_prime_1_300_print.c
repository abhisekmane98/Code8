#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=300;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				//composite	
				break;
			}
		}
		
		if(j==i/2+1)
			printf("%d\n",i);
	}
}
