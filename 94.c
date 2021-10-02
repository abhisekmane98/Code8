#include<stdio.h>
int main()
{
	int s[4][2]={
					{1234,56},
					{1212,33},
					{1434,80},
					{1312,78}
				};
				
	int i;
	int *p=&s[0][0];
	
	for(i=0;i<=7;i++)
    {
		printf("%d,",*p);
		p++;
		if(i%2!=0)
			printf("\n");
	 	
	}
     
     
				
}
