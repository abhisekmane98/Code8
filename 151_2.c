#include<stdio.h>
#include<string.h>
int main()
{
	char *a="Naponlepon",*ch;
	ch=strdup(a);
	printf("%s\n",ch);
    ch[2]='a';
//	ch="people";
	printf("%s",ch);

	
}
