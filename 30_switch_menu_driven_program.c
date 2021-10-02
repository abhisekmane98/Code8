#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p;
	int a,f,i;
	while(1)
	{
		printf("Select appropriate Action\n\n1.Factorial of number\n2.Prime Or not\n3.Odd or Even\n4.Exit\n\n");;
		scanf("%d",&p);
		switch(p)
		{
			case 1:
				printf("Enter a number ");
				scanf("%d",&a);
				f=1;
				for(i=1;i<=a;i++)
				{
					f=f*i;
				}
				printf("%d\n\n",f);
				break;
			case 2:
				printf("Enter a number ");
				scanf("%d",&a);
				printf("\n");
				if(a==1)
					printf("Neither prime nor compsite");

				for(i=2;i<=a/2;i++)
				{
					if(a%i==0)
					{
						printf("Composite");
						break;
					}
				}
	
				if(i==a/2+1)
					printf("prime no.");
				printf("\n\n");
				break;
				
			case 3:
				printf("Enter a number ");
				scanf("%d",&a);
				printf("\n");
				if(a%2==0)
					printf("Even no.");
				else
					printf("Odd no.");
				printf("\n\n");
				break;
			case 4:
				exit(0);
				
	}
	system("pause");
	system("CLS");
}

}
