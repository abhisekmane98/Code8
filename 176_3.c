#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float *ch;
	ch=(float*)calloc(10,sizeof(float));
	for(i=0;i<=9;i++)
	{
		printf("%d %f\n",i,*(ch+i));
	}
	free(ch);
}
