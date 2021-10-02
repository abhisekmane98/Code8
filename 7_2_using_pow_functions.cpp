#include<stdio.h>
#include<math.h>
int main()
{
	float g,f,r,x,y,r2,p2;
	printf("Enter the co-ordinates of center of circle and radius");
	scanf("%f%f%f",&g,&f,&r);
	
	printf("Entre the co_ordinates");
	scanf("%f%f",&x,&y);
	
	r2=pow(r,2.0);
	p2=pow((x-g),2.0)+pow((y-f),2.0);
	printf("%f,%f\n",r2,p2);
	
	
	if(p2>r2)
		printf("Exterior");
	if(p2<r2)
		printf("interior");
	if(p2==r2)
		printf("on the circle");
	
}
