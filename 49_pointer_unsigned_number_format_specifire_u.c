#include<stdio.h>
int main()
{
    int i,*j;
    i=4;
    j=&i;
    printf("%d,%u",i,j);
    getch();
}
