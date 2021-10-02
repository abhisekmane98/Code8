#include<stdio.h>
void convert(int,char*);
int main()
{
	int n,t;
	printf("Enter a number");
	scanf("%d",&n);  
					
	convert(n/10000000,"crore");			
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
		printf("%s %s ",ten[q],unit[r]);  
	}
	else
	{
		printf("%s ",unit[t]);
	}
	if(t!=0)
	{
		printf("%s ",s);
	}
	
}








