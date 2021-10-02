#include<stdio.h>
int main()
{
	int n,p,b,s,flag=0; // b=big no., s=small no.
	printf("How many numbers you are going to Enter ");
	scanf("%d",&n);
	while(n>0)
	{
		printf("Enter the number ");
		scanf("%d",&p);
		if(flag==0)
		{
			b=s=p;
			flag=1;
		}
		else
		{
			if(p>b)
				b=p;
			if(p<s)
				s=p;
		}
		n--;
	}
	printf("Range is %d",b-s);
}
