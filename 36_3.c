#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,sum=0;
	float i;
	printf("Enter a 5 digit number");
	scanf("%d",&n);
	p=n;
	
	for(i=4;i>=0;i--)
	{
		sum=sum+(n%10)*pow(10.0,i);
		n=n/10;
	}
    printf("%d",sum);
}
