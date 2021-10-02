#include<stdio.h>
int main()
{
	char g;
	printf("Enter a gender");
	scanf("%c",&g);    // i tell below the code and y.k p.no.35 scanf blank
	if(g=='m')
	  printf("Hey Rocky men");
	else
	  printf("Hey beautiful");
}

/* while user entering the character if enter "Enter" or "Blank" it 
  consider as character and so it not equal to 'm' so it print else statement */
