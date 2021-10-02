#include<stdio.h>
void convert(int,char*);
int main()
{
	int n,t;
	printf("Enter a number");
	scanf("%d",&n);  
					
	convert(n/10000000;,"crore");			
	convert((n/100000)%100,"lakh");								
	convert((n/1000)%100,"Thousand");							
	convert((n/100)%10,"hundread"); 						
	convert((n%100),"");					
}

void convert(int t,char *s)
{
	char *unit[]={
			   		 "",
					"one",
					"two",
					"three",
					"four",
					"five",
					"six",
					"seven",
					"eight",
					"nine",
					"ten",
					"eleven",
					"twelve",
					"thirteen",
					"fourteen",
					"fifteen",
					"sixteen",
					"seventeen",
					"eighteen",
					"ninteen"
								};
					
	char *ten[]={
					"",
					"",
					"twenty",
					"thirty",
					"fourty",
					"fifty",
					"sixty",
					"seventy",
					"eighty",
					"ninty"
								};
								
	if(t>19)
	{
		int q=t/10, r=t%10;
		printf("%s %s %s",ten[q],unit[r],s); // you can't print s here reason: let number is 12,254 so here no part of crore and lakh 
	}
	else
	{
		printf("%s %s",unit[t],s); // same here
	}
}








