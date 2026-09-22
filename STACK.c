#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[10],top=-1,choice,no;
void push();
void pop();
void display();
void push()
{
	if (top==9)
	printf("\n stack is full");
	else
	{
		printf("\n enter the number");
		scanf("%d",&no);
		top++;
		stack[top]=no;
	}
}
void pop()
{ 
if(top==-1)
printf("\nstack is empty");
else
{
	no=stack[top];
	top--;
}
}
void display()
{   int i;
	if(top==-1)
	printf("|n stack is empty");
	else
	{
		for(i=top;i>=0;i--)
		printf("%d",stack[i]);
	}
}
void main()
{  
	do
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			default: printf("\ninvalid choice");
			        break;	   	          
		}
	}
	while(choice!=4);
	getch();
}
