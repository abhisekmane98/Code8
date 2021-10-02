#include<stdio.h>
int main()
{
	int s[4][2]={
					{1234,56},
					{1212,33},
					{1434,80},
					{1312,78}
				};
	int i,j;
	int p[][2]=&s[0];
	
	for(i=0;i<=3;i++)
    {
    	for(j=0;j<=1;j++)
    	{
    		printf("%d,",p[i][j]);
		}
		printf("\n");	
	}	
     		
}
	

	
     

