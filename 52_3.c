#include<stdio.h>
#include<math.h>
int main()
{ 
	int a,b,c,S;
	double A2,A;
	printf("Enter the side lengths");
	scanf("%d%d%d",&a,&b,&c);
	
	
	S=(a+b+c)/2;
	
	A2=S*(S-a)*(S-b)*(S-c);
	A=sqrt(A2);
	
	printf("%d,%lf,%lf",S,A2,A);	
}
