#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 2
int queue[size],front=-1,rear=-1,n;
int qfull();
int qempty();
void add(int);
void del();
void display();
void main()
{
	int option;
	char ans;
	do
	{
		printf("\n 1.inssert element");
		printf("\n 2.delet element\n");
		printf("n 3.display element\n");
		printf("\n 4.enter your option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("\n enter the element");
			    scanf("%d",&n);
			    add(n);
			    break;
			case 2:del();
			
			      break;
			case 3:display();
			       break;
			default:printf("\n wrong choice");
			        break;	   	      
		}
		printf("\n do you want to contenue[y/n]");
		ans=getch();
	}
	while(ans=='y');
	getch();
}
int qfull()
{
	if (front==(rear+1)%size)
	return 1;
	else 
	return 0;
}
int qempty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
void add(int n)
{
	if(qfull())
	printf("\n circular queue is full");
	else
	{
		if(front==-1)
		front=rear=0;
		else
		rear =(rear +1)%size;
		queue[rear]=n;
	}
}
void del()
{
	if (qempty())
	printf("\n circular queue is empty");
	else{
		n=queue[front];
		if(front==rear)
		front=rear=-1;
		else
		front=(front+1)%size;
		printf("\n deleted element is %d",n);
	}
}
void display()
{
	int i;
	i=front;
	if(qempty())
	printf("\n circular queue is empty");
	else
	{
		printf("\n element of circular queue are");
		while(i!=rear)
		{
			printf("\n%d",queue[i]);
			i=(i+1)%size;
		}
		printf("\n%d",queue[i]);
	}
}
