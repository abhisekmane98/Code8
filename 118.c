#include<stdio.h>
int main()
{
	void *p,*q;
	int x;
	float y;
	p=&x;
	q=&y;
	*(int*)p=4;
	*(float*)q=4.5;
	printf("%d,%.2f",*(int*)p,*(float*)q);

}
