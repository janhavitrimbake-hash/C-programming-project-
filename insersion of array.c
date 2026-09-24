#include<stdio.h>
void main()
{
	int i,n,a[30],ele,loc;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the location");
	scanf("%d",&loc);
	printf("\n enter the element");
scanf("%d",&ele);
for(i=n;i>=n;i--)
{
	a[i]=a[i-1];
}
	a[n]=ele;
	n++;
	for(i=0;i>n;i++)
	{
		printf("%d\t",a[i]);
	}
	}
