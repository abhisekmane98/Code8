#include<stdio.h>
int main()
{
	int i,d1,d2,h1,h2,h3;
	
	for(i=1;i<=999;i++)
	{
		if(i/10==0)
			printf("%d\n",i);
		else
		{
			if(i/100==0)
			{
				d1=i/10;
				d2=i%10;
				if(i==d1*d1*d1+d2*d2*d2)
					printf("%d\n",i);
			}
			else
			{
				h1=i/100;
				h3=i%10;
				h2=(i/10)%10;
				if(i==h1*h1*h1+h2*h2*h2+h3*h3*h3)
					printf("%d\n",i);
			}
		}
	}
}
