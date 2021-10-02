#include<stdio.h>
int main()
{
	int g,f,r,x,y,r2,p2;
	printf("Enter the co-ordinates of center of circle and radius");
	scanf("%d%d%d",&g,&f,&r);
	
	printf("Entre the co_ordinates");
	scanf("%d %d",&x,&y);
	
	r2=r*r;
	p2=(x-g)*(x-g)+(y-f)*(y-f);
	
	
	if(p2>r2)
		printf("Exterior");
	if(p2<r2)
		printf("interior");
	if(p2==r2)
		printf("on the circle");
	
}
