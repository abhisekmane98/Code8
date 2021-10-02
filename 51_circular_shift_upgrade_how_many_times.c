#include<stdio.h>
void shift(int*,int*,int*,int);
int main()
{
	int x,y,z,n;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	printf("Tell how many times you want circular shift");
	scanf("%d",&n);
	
	shift(&x,&y,&z,n);
	printf("%d,%d,%d",x,y,z);
}

void shift(int *a,int *b,int *c,int n)
{
	int i=1;
	while(i<=n)
	{
		int r=*c;
		*c=*b;
		*b=*a;
		*a=r;
		i++;
	}

}
