#include<stdio.h>
int main()
{
	int y,m,d,i,sum=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("Enter a year and month and date");
	scanf("%d %d %d",&y,&m,&d);
	

	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				a[1]=29;
			else
				;
		else
			a[1]=29;
	else 
		;

	for(i=0;m-2>=i;i++)            // 0 jan, 1 feb, 2 march, .............., 10 Nov, 11 Dec
	{
		sum=sum+a[i];
	}
	sum=sum+d;
	
	printf("%d",sum);
}
