// see output one cobination is permuting 8 times 
// in 12th ram,shyam boreme band baki bacha ganshyam,kamla 3!2! here 2! is due to r,s aapasme to position change kar sakte na
// 2!2!2!=8 
// i Explained also this in SS2 book
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	int i,j,p,q,s;
	for(a=1;a<=20;a++)
	{
		for(b=1;b<=20;b++)
		{
			for(c=1;c<=20;c++)
			{
				for(d=1;d<=20;d++)
				{
					if(pow(a,3)+pow(b,3)==pow(c,3)+pow(d,3))
					{
						if(a!=c && a!=d && b!=c && b!=d)
						{
							i=a;
							j=b;
							p=c;
							q=d;
							s=pow(i,3)+pow(j,3);
							printf("%d,%d and %d,%d and Number is %d\n",i,j,p,q,s);
						}
					}
				}
			}
		}
	}
}
