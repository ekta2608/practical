#include<stdio.h>

void main()
{
	int a[50]={10,20,30,40,50};
	int i;
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter Value at Index [%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	
	
}
