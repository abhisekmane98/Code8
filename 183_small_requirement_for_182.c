#include<stdio.h>
int main()
{
	char *s[]={
						"abhishek",
						"suuny",
						"kriten",
						"vedant",
						"Ruturaj"			
									};
									
	if(*(s[1]+2)>*(s[2]+2))
		printf("a");
	else
		printf("b");					
}
