#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,count=1,sum=0;
	float i;
	printf("Enter number");
	scanf("%d",&n);
	
	for(i=0;;i++)
	{
		n=n/10;
		if(n==0)
		 break;
		count++;
	}

    printf("%d",count);
}
