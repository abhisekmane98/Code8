#include<stdio.h>
int sum(int);
int main()
{
	int p,s=0;
	printf("Enter the number");
	scanf("%d",&p);
	
	s=sum(p);
	printf("%d",s);
}
int sum(int p)
{
	int s;
	if(p==1)
		return(1);
	s=p+sum(p-1);
		return(s);

}
