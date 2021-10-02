#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char *s1="a",s2[]="b",*temp;
	for(i=3;i<=7;i++)
	{
		
		temp=s2;
		printf("%s ",temp);
		
		strcat(s2,s1);
		printf("%s ",s2);
		
		s1=temp;
		printf("%s ",s1);
		
		getch();
		//strcpy(s1,temp);
	//	printf("%s",s1);
	//	getch();
	
		printf("%d. %s\n",i,s2);
	}
}
