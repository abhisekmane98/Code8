 #include <string.h> 
#include <stdio.h> 

int main() 
{ 
	char s1[] = "STL Fun with STL"; 
	char s2[] = "STL"; 
	char* p; 

	// Find first occurrence of s2 in s1 
	p = strstr(s1, s2); 
	printf("%s\n",p);
	getch();

	// Prints the result 
	if (p!=NULL) 
	{ 
		strcpy(p, "Strings are fucking hard"); 
		printf("%s", s1); 
	} 
	else
		printf("String not found\n"); 

	return 0; 
} 

