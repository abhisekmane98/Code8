#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char *ch;
	ch=(char*)calloc(10,sizeof(char));
	printf("Enter 10 characters\n");
	for(i=0;i<=9;i++)
	{
		scanf("%c",ch+i);
	}
	printf("%s\n\n",ch);
	
	for(i=0;i<=56;i++)
	{
		printf("%c,%d\n",*(ch+i),ch[i]);
	}
	free(ch);
}
