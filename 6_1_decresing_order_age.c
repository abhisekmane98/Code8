#include<stdio.h>
int main()
{
	int r,s,g;
	printf("Enter age of ram,shyam and ghanshyam");
	scanf("%d %d %d",&r,&s,&g);
	
	if(r>s)
		if(r>g)
			if(g>s)
				printf("rgs");
			else
				printf("rsg");
		else
			printf("grs");                             // r>s G>r
	else
		if(s>g)
			if(g>r)                                       // s>r s>g
				printf("sgr");    
			else
				printf("srg");
		else
		    printf("gsr");                                         // s>r g>s                                     
}
