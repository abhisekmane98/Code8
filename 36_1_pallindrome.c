// lot of errors
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,count=1,x,y,z;
	float i,j;
	printf("Enter a number");
	scanf("%d",&a);
	b=a;   // storing a number for future purpose
	
	for(i=0;;i++)
	{
		a=a/10;
		if(a==0)
		 break;
		count++;
	}
	
	printf("No. of digits are %d\n",count);
//	getch();
	if(count%2!=0) // if number contain odd number of digits
	{
		for(i=count-1,j=1;i-j>=1;i--,j++)
		{
			x=b/pow(10.0,i);
			z=pow(10.0,j);
			y=a%z;
			if(x!=y)
			 break;
			
		}
		if(i-j==-1)
			printf("Pallindrome");
		else
			printf("Not a Pallindrome");
			
	}
	else // if number contain Even number of digits
	{
		for(i=count-1,j=1;i==j;i--,j++)
		{
			x=a/pow(10.0,i);
			z=pow(10.0,j);
			y=a%z;
			if(x!=y)
			 break;
			
		}
		if(j==i+1)
			printf("Pallindrome");
		else
			printf("Not a Pallindrome");			
	}
}

