#include<stdio.h>
int main()
{
	int p,i;
	printf("Enter a Number");
	scanf("%d",&p);
	
	if(p==1)
		printf("Neither prime nor compsite");
// 	if(p==2)
//		printf("prime no.");                        // not necessary second last statement componsate that
	
		
		
	for(i=2;i<=p/2;i++)
	{
		if(p%i==0)
		{
			printf("Composite");
			break;
		}
	}
	
	if(i==p/2+1)
		printf("prime no.");
	
}
