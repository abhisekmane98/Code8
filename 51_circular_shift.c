#include<stdio.h>
void shift(int*,int*,int*);
int main()
{
	int x,y,z;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	
	shift(&x,&y,&z);
	printf("%d,%d,%d",x,y,z);
}

void shift(int *a,int *b,int *c)
{
	int p=*a,q=*b,r=*c;
	*c=q;
	*b=p;
	*a=r;
}
