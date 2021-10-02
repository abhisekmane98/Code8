#include<stdio.h>

#define large(a,b,c) 	if(a>=b)\
						{\
							if(a>=c)\
								printf("largest No. is %d\n",a);\
							else\
								printf("largest No. is %d\n",c);\
						}\
						else\
						{\
							if(b>=c)\
								printf("largest No. is %d\n",b);\
							else\
								printf("largest No. is %d\n",c);\
						}
							


