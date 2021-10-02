#include<stdio.h>
int main()
{
	int i,j,k,p=0;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				p++;
				printf("%d %d%d%d\n",p,i,j,k);
			}
		}
	}
}
