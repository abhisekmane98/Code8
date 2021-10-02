#include<stdio.h>
int main()
{
	int p,i,x=0,y=0,z=0;
	char q;
	
	for(i=0;;i++)
	{
		printf("Enter the Numbers ");
		scanf("%d",&p);
		if(p<0)
			x+=1;
		if(p==0)
			y+=1;
		if(p>0)
			z+=1;
		printf("Negative Numbers %d\nNumbers of Zero %d\npositive numbers %d\n\n",x,y,z);
		
		printf("Do you wanna stop then print 's'\n");
		scanf("%c",&q);
		if(q=='s')
			break;
	}
}
