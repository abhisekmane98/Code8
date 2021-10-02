#include<stdio.h>
int main()
{
	float i,j,f=1.0,s=0.0;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		s=s+i/f;
		f=1;  // again set f=1;
	}
	printf("%f",s);
}
