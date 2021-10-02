#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,n=0,s=0;  // n place of reminder,s is octal number 
	printf("Enter the Number ");
	scanf("%d",&p);

	while(p!=0)
	{
		r=p%8;  // reminder
		s=s+pow(10.0,n)*r;
		p=p/8; // dividend
		n++;
		
	}
	printf("octal number is %d",s);
}
