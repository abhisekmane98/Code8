// find strange and imp error
#include<stdio.h>
int romanize(int,int,char);
int main()
{
	int y,i;
	
	printf("Enter the year upto 4 digit");
	scanf("%d",&y);
	
	y=romanize(y,1000,'m');
	y=romanize(y,500,'d');
	y=romanize(y,100,'c');
	y=romanize(y,50,'l');
	y=romanize(y,10,'x');
	y=romanize(y,5,'v');
	y=romanize(y,1,'i');
	
}

int romanize(int y,int k,char ch)
{
	int i,j;
	j=y/k;
    for(i=1;i<=j;i++)
	{
		printf("%c",ch);
	}
	return(y-j*k);
	
}

