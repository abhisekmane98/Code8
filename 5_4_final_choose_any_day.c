#include<stdio.h>
int main()
{
	int y,y1,y2,x,p;
	int m,d,i,sum=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("Enter a year and month and date");
	scanf("%d %d %d",&y,&m,&d);
	
	y1=y-1;
	y1=y1%400;    // effective years
	y2=y1/4;     // now i have to evtract leap years
	x=y1/100;    // century years
	y2=y2-x;    // effective leap years
	p=y1+y2;     // shift of days
	p=p%7;      // effective shifts of days
	
	
	
	
	
	
	
	// now i came to 1 jan of enterd year
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				a[1]=29;
			else
				;
		else
			a[1]=29;
	else 
		;

	for(i=0;m-2>=i;i++)            // 0 jan, 1 feb, 2 march, .............., 10 Nov, 11 Dec
	{
		sum=sum+a[i];
	}
	sum=sum+(d-1); /*  Note this change
						 we have to make shift not calculate the which day it is */
						 
	sum=sum%7; // effective shift
	
	
	
	
	
	
	
	// part 2 finished
	p=p+sum; // net effective shift
	p=p%7;
	
	if(p==1)
		printf("Tuesday");
	if(p==2)
		printf("Wednesday");
	if(p==3)
		printf("Thursday");
	if(p==4)
		printf("Friday");
	if(p==5)
		printf("Saturday");
		
	if(p==6)
	   	printf("sunday");
    if(p==0)                    
 	 	printf("Monday");
}

