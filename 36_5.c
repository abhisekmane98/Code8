#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,count=1,z2,c1,i,x,y,sum=0;
	float z1;
	
	printf("Enter a number");
	scanf("%d",&n);
	p=n;   
	
	for(i=0;;i++)
	{
		n=n/10;
		if(n==0)
		 break;
		count++;
	}
	
	printf("No. of digits are %d\n",count);


	if(count%2!=0) // if number contain odd number of digits
	{
		printf("Odd section\n");
		z1=(count+1)/2;
		printf("%f\n",z1);
		x=p/pow(10.0,z1);
		printf("%d\n",x);
		z2=pow(10.0,z1-1);
		printf("%d\n",z2);
		y=p%z2;	
		printf("%d\n",y);	
		c1=count/2;
		printf("%d\n",c1);
	}
	else // if number contain Even number of digits
	{
		printf("Even section\n");
		z1=count/2;
		printf("%f\n",z1);
		x=p/pow(10.0,z1);
		printf("%d\n",x);
		z2=pow(10.0,z1);
		printf("%d\n",z2);
		y=p%z2;	
		printf("%d\n",y);
		c1=count/2;	
		printf("%d\n",c1);				
	}
	
		
	for(i=c1-1;i>=0;i--)
	{
		sum=sum+(y%10)*pow(10.0,i);
		y=y/10;
	}
    
    printf("%d,%d\n",x,sum);
    if(x==sum)
    	printf("Pallindrome");
    else
    	printf("Not a pallindrome");
	
}

