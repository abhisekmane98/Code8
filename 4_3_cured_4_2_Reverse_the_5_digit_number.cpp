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
	
	p1=p/10000;
	// p2=p/1000-p1*10;                 // basic idea
	// p3=p/100-(p1*100+p2*10);
	p5=p%10;
	p4=(p%100)/10;
	p3=(p%1000)/100;
	p2=(p%10000)/1000;
	
	sum1=sum/10000;
	sum5=sum%10;
	sum4=(sum%100)/10;
	sum3=(sum%1000)/100;
	sum2=(sum%10000)/1000;
	
	if( (p1==sum1) && (p2==sum2) && (p3==sum3) && (p4==sum4) && (p5==sum5))
		printf("yes Reverse number is exacly same to given no.");
	else
	 	printf("They are different");
}
