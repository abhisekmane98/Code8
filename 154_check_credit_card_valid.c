#include<stdio.h>

void check(char*);

int main()
{
	char s[17];
	printf("Enter a credit card no.");
	scanf("%s",s);
	printf("%s\n",s);
	check(s);
}

void check(char *s)
{
	int a[17],b,s1=0,s2=0,i;
	for(i=0;i<=15;i++)
	{
		b=s[i];
		b=b-48;
		a[i]=b;
	}
	for(i=0;i<=15;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	
	for(i=1;i<=15;i+=2)
	{
		s1=s1+a[i];
	}
	printf("%d\n",s1);
	
	
	for(i=14;i>=0;i-=2)
	{
		a[i]=a[i]*2;
		
		if(a[i]>=10)
			a[i]=a[i]-a[15];
		
		printf("%d,",a[i]);
			
		s2=s2+a[i];
	}
	printf("\n");
	printf("%d\n",s2);
	
	if(((s1+s2)%10)==0)
		printf("valid credit card");
	else
		printf("invalid credit card");
	
}
