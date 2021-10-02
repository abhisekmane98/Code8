#include<stdio.h>
int main()
{ 
	int p,n=0,s=0,k,i;
	printf("Enter a number");
	scanf("%d",&p);
	k=p; // storing a number
	while(p!=0)
	{
		p=p/10;
		n++;
	}
	printf("%d",n);
	
	for(i=1;i<=n;i++)
	{
		s=s+k%10;
		k=k/10;
		
	}
	printf("%d",s);
}
