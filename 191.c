// i made the logic in this program but it is very complecated
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	char v[]={'a','e','i','o','u','\0'};
	char *s,*p;
	int i,j,k,count;
	s=(char*)calloc(80,sizeof(char));
	p=(char*)calloc(80,sizeof(char));
	
	printf("Enter a line");
	gets(s);
	
	for(i=0,k=0; s[i]!='\0';)
	{
		for(j=0,count=0 ;j<=4; j++)
		{
			if(s[i]==v[j])
			{
				i++;
				break;
			}
			count++;
		}
		if(count==5)
		{
			p[k]=s[i];
			i++;
			k++;
		}
		
	}
	printf("%s",p);
	
}
