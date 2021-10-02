// find greatest common divisor of two numbers  
#include<stdio.h>
int gcd(int,int);  
int main()
{
	int a,b,x;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	x=gcd(a,b);
	printf("gcd(%d,%d) is %d",a,b,x);
	
}

int gcd(int m,int n)  
{
	int q,r;
	if(m==0 && n!=0) 
		return n;
	if(m!=0 && n==0)
		return m;
	if(m==0 && n==0)
		return 0;
		
	if(m>n)
	{
		q=m/n;
	    r=m-n*q;
	    gcd(n,r);
	}
	else
	{
		q=n/m;
	    r=n-m*q;
	    gcd(m,r);
	}

}
