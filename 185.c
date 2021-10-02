// done
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"vedant",
						"ruturaj"			
									};
	int r,i,j;
	char *temp;
	temp=(char*)calloc(15,sizeof(char));							
	for(r=0;r<=3;r++)
	{
		for(i=0;i<=3-r;i++)
		{
			for(j=0; ( *(s[i]+j)!='\0' || *(s[i+1]+j)!='\0' ) ; j++)
			{
				
				if( *(s[i]+j) > *(s[i+1]+j) )	
				{
					temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
					break;
				}
				else
				{
					if( *(s[i]+j) == *(s[i+1]+j) )           
					{
						continue;
					}
					else
					{
						break;
					}
				}
				
				
		
			}//j	
			
			
			if( (s[i]+j)=='\0' || (s[i+1]+j)=='\0' )
			{	
			
				if( *(s[i]+j) > *(s[i+1]+j) )
				{
					temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
				}
			}
			
		}//i	
	}//r
	
	
	for(i=0;i<=4;i++)
	{
		printf("%s\n",s[i]);
	}
	
					
}
