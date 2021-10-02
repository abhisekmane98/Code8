#include<stdio.h>
int main()
{
	int a[8]={13,33,47,58,92,85,19,26};
	int b[8];
	int i,j;
	for(i=0,j=7; i<=7; i++,j--)
	{
		b[j]=a[i];
				
	}
	j=j+1;
	do
	{
		printf("%d,",b[j]);
		j++;
	}while(j!=8);
}
