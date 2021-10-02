#include<stdio.h>
#include<math.h>
int main()
{
	float g,f,x,y;
	double r,p2,p;
	printf("Enter the co-ordinates of center of circle and radius");
	scanf("%f%f%lf",&g,&f,&r);
	
	printf("Entre the co_ordinates");
	scanf("%f%f",&x,&y);
	
	p2=pow((x-g),2.0)+pow((y-f),2.0);
	p=sqrt(p2);
	
	printf("%lf,%lf\n",r,p);
	
	
	if(p>r)
		printf("Exterior");
	if(p<r)
		printf("interior");
	if(p==r)
		printf("on the circle");
	
}
