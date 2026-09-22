#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[5][15],search[15];
	int n,i,flag=0;
	printf("enter the string\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);
	}
	printf("enter the search string\n");
	scanf("%s",search);
	for(i=0;i<5;i++)
	{
		if (strcmp(a[i],search)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("element are foundat %d location",i+1);
	else
	printf("element not found");
	}

