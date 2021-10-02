#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int k,i,j;
    char a[]="saurabh";
    k=strlen(a);
    for(i=0;i<=k-2;i++)
    {
        for(j=0;j<=k-2-i;j++)
        {
            char t;
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    printf("%s",a);
    getch();
}   n
