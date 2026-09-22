#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,loc,ele;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the location \n");
	scanf("%d",&loc);
	printf("enter the element");
	scanf("%d",&ele);
	for(i=n;i>=loc;i--)
	{
		a[i]=a[i-1];
	}
	a[loc]=ele;
	n++;
	for(i=0;i<=n;i++)
	{printf("%d",a[i]);
	}
}
