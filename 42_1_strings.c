#include<stdio.h>
int main()
{
	char s[3][10];
	int i;
	printf("Enter 3 strings");
	for(i=0;i<=2;i++)
		scanf("%s",&s[i][0]);
		
	printf("S");
//	for(i=0;i<=2;i++)
		printf("%s",s[0][0]);
}
