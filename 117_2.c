#include<stdio.h>

void insert_front(int);
void insert_rear(int);
int retrive_front(void);
int retrive_rear(void);

void display_array(int*);

int *front,*rear;
int a[30];

int main()
{
	int i,item_f,item_r;
	front=NULL;
	rear=NULL; 

	insert_front(10);
	insert_front(11);
	insert_front(12);
	insert_front(13);
	
	item_f=retrive_front();
	printf("%d\n",item_f);
	
	insert_rear(25);
	
	item_r=retrive_rear();
	printf("%d\n",item_r);
	
	
	display_array(a);
	getch();
	
	
	
	
	
}

void display_array(int *a)
{
	int i;
	for(i=0;i<=rear-front;i++)
	{
		printf("%d %d\n",i,a[i]);
	}
}

void insert_front(int p)
{
	int i,temp;
	
	if(front==NULL)
	{
		printf("I am in Null seection\n");
		*a=p;
		front=a;
		rear=a;
	}
	else
	{
		if((rear-front)!=29)
		{
			printf("I am in rear-front section\n");
			
			for(i=0;i<=rear-front ;i++)
			{
				*((rear+1)-i)=*(rear-i);	
			}
			
			rear=rear+1;
			*front=p;
		}
		else
		{
			printf("Stack is full\n");
		}
		
	}
	
}

int retrive_front()
{
	
	int item=*front,i;
	for(i=0;i<=rear-front-1;i++)
	{
		*(front+i)=*(front+i+1);	
	}
	rear=rear-1;
	return item;
}

void insert_rear(int p)
{
	*(rear+1)=p;
	rear=rear+1;
}

int retrive_rear()
{
	rear=rear-1;
	return *(rear+1);
}











