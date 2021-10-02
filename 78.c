// find mistake
#include<stdio.h>
//#define compare(a,b) 
int main()
{
	int a,b;
	while(1)
	{
		printf("Enter two numbers\n");
		fflush(stdin);
		scanf("%d,%d",&a,&b);
	//	compare(a,b);
	(a>b ? printf("%d\n",a) : printf("%d\n",b));
		
	}
}
