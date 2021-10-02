#include<stdio.h>
#include<string.h>
int main()
{
	int k,i,j;
	char a[]="saurabh",b[20];
	k=strlen(a);

	b[k]='\0';
	
	for(i=k-1,j=0;i>=0 && j<=k-1;i--,j++)
	{
		b[j]=a[i];
		printf("%c ",b[j]);
	}
	
	printf("%s",b);
	getch();
}
