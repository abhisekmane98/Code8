#include<stdio.h>
#include<math.h>
float sine(float);
int fact(float);
int main()
{
    float x,k;
    printf("Enter the Number");
    scanf("%f",&x);
    k=sine(x);
    printf("%f",k);
    getch();
}
float sine(float x)
{
    float a=0,i,t,j;
    for(i=1,j=1;i<=7;i+=2,j++)
    {
      t=pow((-1),j+1)*(pow(x,i)/fact(i));
      a=a+t;
    }
    return a;
}
int fact(float p)
{
    int s=1,i=1,q=p;
    for(i=1;i<=q;i++)
    {
       s=s*i;  
    }
    return s;
}
