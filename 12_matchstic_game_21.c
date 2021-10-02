#include<stdio.h>
int main()
{
	int p,c,m=21;    // p is No. of Matchstics pickd by person
	while(1)
	{
		printf("Pick 1,2,3 or 4 Matchstics\n");
		scanf("%d",&p);
		m=m-p;         // remained matchstics in the game
		printf("Matchstics remains %d\n",m);
		
		if(m==0)
			break;
		// now computers turn
		c=5-p;
		printf("Computer picks %d\n",c);
		m=m-c;
		printf("Matchstics remains %d\nMatchstics consume %d\n\n",m,21-m);
	
  	}
  	printf("Computer Wins");
  	return 0;
  	
}
