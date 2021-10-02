#include<stdio.h>
int main()
{
	char s[3][10];
	int i;
	printf("Enter 3 strings");
	for(i=0;i<=2;i++)
		scanf("%s",&s[i][0]);
		
	printf("S");
	for(i=0;i<=2;i++)
		printf("%s",s[i]);  // why last one is not working i am not getting i also mentioned it in SS2 book
    getch();
}
