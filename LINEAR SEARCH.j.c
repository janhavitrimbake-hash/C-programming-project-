#include<stdio.h>
#include<conio.h>
int main()
{
	int n,key,a[100],i,flag=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("\n enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key element\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	   if(a[i]==key)
	{
		flag=1;
		break;
	}
	}
	if(flag==1)
	{
	printf("element are found at %d location",i+1);
	}
	else
	{
	printf("element are not found");
    }
	getch();
}
