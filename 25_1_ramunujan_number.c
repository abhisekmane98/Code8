// find problem
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	for(a=1;a<=20;a++)
	{
		for(b=1;b<=20;b++)
		{
			for(c=1;c<=20;c++)
			{
				for(d=1;d<=20;d++)
				{
					if(pow(a,3)+pow(b,3)==pow(c,3)+pow(d,3))
							printf("%f,%f and %f,%f and Number is %f\n",a,b,c,d,pow(a,3)+pow(b,3));
				}
			}
		}
	}
}
