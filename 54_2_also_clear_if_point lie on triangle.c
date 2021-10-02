// changes done in lint No.14
#include<stdio.h>
#include<math.h>
#include<stdlib.h>     // for using exit(0)
float area(float,float,float);
float length(int,int,int,int);
void check(float,float,float,float,float,float,float,float,float,float,float,float);
int main()
{
	float x1,y1,x2,y2,x3,y3,x,y,a,b,c,A,A1,A2,A3;
	printf("3 Co-ordinates of triangle and any random Co-ordinate");
	scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x,&y);
	
	a=length(x1,y1,x2,y2);
	b=length(x2,y2,x3,y3);
	c=length(x3,y3,x1,y1);
	printf("length of sides of triangle ABC are %f,%f,%f\n",a,b,c);
	
	A=area(a,b,c);
	printf("Area of triangle ABC is %f\n",A);
	
	check(x,y,x1,y1,x2,y2,x3,y3,a,b,c,A);
	
	
}

float length(int p,int q,int r,int s)
{
	float l2,l;
	l2=(r-p)*(r-p)+(s-q)*(s-q);
	l=pow(l2,0.5);	
	return l;
}

float area(float a,float b,float c)
{
	float S,A;
	double A2;
	S=(a+b+c)/2;
	
	A2=S*(S-a)*(S-b)*(S-c);
	if(A2<0)
	{
		printf("point lies on the line");
		exit(0);		
	}                                  // by assuming that user enter Non collinear points because if user enter collinear points then there is chaos
	A=sqrt(A2);
	return(A);
}

void check(float x,float y,float x1,float y1,float x2,float y2,float x3,float y3,float a,float b,float c,float A)
{
	float l_PA,l_PB,l_PC,A_PAB,A_PBC,A_PCA,sum_Area;
	
	l_PA=length(x,y,x1,y1);
	l_PB=length(x,y,x2,y2);
	l_PC=length(x,y,x3,y3);
	printf("length of sides of PA,PB,PC are respectively  %f,%f,%f\n",l_PA,l_PB,l_PC);
	
	
	A_PAB=area(a,l_PA,l_PB);
	A_PBC=area(a,l_PB,l_PC);
	A_PCA=area(a,l_PC,l_PA);
	sum_Area=A_PAB+A_PBC+A_PCA;
	
	printf("Area of triangle PAB,PBC and PCA are respectively  %f,%f,%f\n",A_PAB,A_PBC,A_PCA);
	printf("sum_Area and Area are respectively %f,%f\n",sum_Area,A);
	
	if (sum_Area-A<=0.0009)   // 0.0009 is to compensate anomolies created due to floating points
		printf("point is interior or on the triangle");
	else
		printf("point is Exterior");
}











