#include<stdio.h>
#include"80larg_e_num_3.h"
int main()
{
	int a,b,c;
	char ch;
	do
	{
		printf("Enter 3 numbers\n");
		scanf("%d%d%d",&a,&b,&c);
		large(a,b,c);	
		printf("if you wanna continue then enter 'Y' else 'N'\n ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
	
}
