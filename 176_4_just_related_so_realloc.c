#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *ch;
	ch=(int*)calloc(10,sizeof(int));

	printf("Enter 10 numbers to stord in created memory\n");	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&ch[i]);
	}
	
	realloc(ch,15*sizeof(int));
	ch[12]=100;
	
	printf("Enter values in newly created memory");
	for(i=10;i<=14;i++)
	{
		scanf("%d",ch+i);
	}
	
	for(i=0;i<=14;i++)
	{
		printf("%d,",*(ch+i));
	}
	free(ch);
}
