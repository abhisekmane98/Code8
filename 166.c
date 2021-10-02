#include<stdio.h>
int main()
{
	char *s[]={
				"bonapart",	
				"agustus",
				"veer",
				"akbar",
				"sikandar"	
							};
	char *temp;
	temp=s[3];
	s[3]=s[2];
	s[2]=temp;
	printf("%s,%s",s[2],s[3]);
}
