#include<stdio.h>
#define test(ch) if(ch>=97 && ch<=122)\
				      printf("it is small case letter\n");\
				  else printf("it is capital case letter\n");
				      
				
int main()
{
	char ch;
	while(1)
	{
		printf("Enter a char\n");
		fflush(stdin);
		scanf("%c",&ch);
		printf("%d\n",ch);
		test(ch);
	}
}
