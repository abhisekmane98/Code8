#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *ch;
	ch=(int*)malloc(10*sizeof(int));
	for(i=0;i<9;i++)
	{
		printf("%c,%d",*(ch+i),*(ch+i));
	}
	free(ch);
}
