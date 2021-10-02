// in last if d==6 sunday else monday these are only connected, all remaning else are indvidual statements
#include<stdio.h>
int main()
{
	int y,y1,x,y2,d;
	
	printf("Enter the year");
	scanf("%d",&y);
	y=y-1; // This much years are completed now 1 jan of yth
	
	y1=y%400;   
              // y1 is effective years
	          /* Now remember days will shift by y1 and also we have to add number (No. of leap years); */
	y2=y1/4;    // y2 leap years only now we have to substract century years 
	x=y1/100;
	y2=y2-x;  // effective leap years
	d=y1+y2;  // effective shifts in days
	
	d=d%7;	  // effective shift
	
	if(d==1)
		printf("Tuesday");
	if(d==2)
		printf("Wednesday");
	if(d==3)
		printf("Thursday");
	if(d==4)
		printf("Friday");
	if(d==5)
		printf("Saturday");
		
	if(d==6)
	   	printf("sunday");
    else                       // ie d==0
  	 	printf("Monday");
	
}
