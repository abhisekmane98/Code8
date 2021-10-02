#include<stdio.h>
void xtrcpy(char*,char*);
int main()
{
	int i;
	char *s1="a", *s2="bonapart", *temp;
	
	for(i=0;i<=5;i++)
	{	
		xtrcpy(s2,temp);
		
		printf("%s",temp);
		getch();
		
	}
	
}

void xtrcpy(char *s2, char *temp)
{
	int i;

	for(i=0;s2[i]!='\0';i++)
	{
		
		*(temp+i)=s2[i];   // you can't do this as temp+i is what because there is no adress contained in it;
	}

}
