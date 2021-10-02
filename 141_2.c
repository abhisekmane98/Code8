#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[100]="a",s2[100]="b",*temp;
	
	for(i=3;i<=7;i++)
	{
		
		strcpy(temp,s2);           // this is also wrongtemp is character pointer which store base adress of constant string so temp is not a whole string 
									// it is just character but it print by %s no pb so as it is not a string how can you copy another string in it
		strcat(s2,s1);
		
		strcpy(s1,temp);
		printf("%s",s1);    
		getch();           
	
		printf("%d. %s\n",i,s2);
	}
}
