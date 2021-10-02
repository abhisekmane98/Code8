#include<stdio.h>
#include<stdlib.h>

void display(int (*)[3]);
int det(int *,int);
int p=1;

int main()
{
	
	int n,i,j,value;
	
	printf("Enter the order of matrix you are going to enter");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("Enter the matrix");
	
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
			scanf("%d",&a[i][j]);
			
	}
	
	display(a);
	
	value=det(&a[0][0],n);
	free(a);
	
	printf("%d",value);
}

void display(int (*a)[3])
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d,",*(*a+j));
		}
		printf("\n");
		a++;
	}
}

int det(int *a,int n)
{

	int *a2,newpos,pos,value=0,sign=1,i,j,k,count;
	
	if(n==1)
	{ 
		return *a;
	}
	
	for(i=0;i<=n-1;i++)
	{
		
		a2=(int*) malloc((n-1)*(n-1)*sizeof(int));
				
		for(j=1;j<=n-1;j++)
		{
			
			for(k=0,count=0;k<=n-1;k++)
			{
			
				if(k==i)
					continue;
			
				pos=j*n+k;
				newpos=(j-1)*(n-1)+count;
				
			   *(a2+newpos)=*(a+pos);
			   count++;
			   
			}
		}
		
	//	printf("p=%d i=%d\n\n%d+%d*%d*returned value\n",p++,i,value,a[i],sign);       To understand
	
		value=value+a[i]*sign*det(a2,n-1);
		sign=sign*(-1);
		free(a2);
	}	
	return value;
}

