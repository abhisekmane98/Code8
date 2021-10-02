#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[100]="a",s2[100]="b",*temp;
	
	for(i=3;i<=7;i++)
	{
		temp=s2;
		strcat(s2,s1);
		
		strcpy(s1,temp);
		printf("%s",s1);    // very important why it printing ba not a reason is temp contaning adress of s2 but string at s2 itself changed due to strcat(s1,temp)
		getch();           
	
		printf("%d. %s\n",i,s2);
	}
}
