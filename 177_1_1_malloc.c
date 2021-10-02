#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char *ch;
	ch=(char*)malloc(10*sizeof(char));
	printf("%s\n\n",ch);
	
	for(i=0;i<9;i++)
	{
		printf("%c,%d\n",*(ch+i),ch[i]);
	}
	free(ch);
}
