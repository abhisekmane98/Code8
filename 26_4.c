#include<stdio.h>
int main()
{
	int hour;
	for(hour=0;hour<=23;hour++)
	{
		if(hour==0)
			printf("12 Midnight\n");
		if(hour<12 && hour!=0)
			printf("%d AM\n",hour);
		if(hour==12)
			printf("12 Noon\n");
		if(hour>12)
			printf("%d PM\n",hour-12);

	}
}
