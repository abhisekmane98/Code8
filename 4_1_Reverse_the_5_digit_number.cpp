#include<stdio.h>
int main()
{
	int n,p,sum=0;
	printf("Enter a 5 digit number");
	scanf("%d",&n);
	
	p=n;
	sum=(n%10)*10000;
	n=n/10;
	
	sum=sum+(n%10)*1000;
	n=n/10;
	
	sum=sum+(n%10)*100;
	n=n/10;
	
	sum=sum+(n%10)*10;
	n=n/10;
	
	sum=sum+(n%10)*1;

    printf("%d",sum);
}
