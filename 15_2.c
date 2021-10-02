// in last program i not considerd the negative numbers but code not changes see
#include<stdio.h>
int main()
{
	int n,p,b,s,i; // b=big no., s=small no.
	printf("How many numbers you are going to Enter ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the number ");
		scanf("%d",&p);
		if(i==0)
			b=s=p;
		else
		{
			if(p>b)
				b=p;
			if(p<s)
				s=p;
		}
	}
	printf("Range is %d",b-s);
}
