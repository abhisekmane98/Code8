#include<stdio.h>
int main()
{
	int n,p,sum=0;
	int p1,p2,p3,p4,p5,sum1,sum2,sum3,sum4,sum5;
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
	
	printf("Reverse No. is %d\n",sum);

	if(p==sum)
		printf("yes Reverse number is exacly same to given no.");
	else
	 	printf("They are different");
}
