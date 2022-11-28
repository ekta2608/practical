#include<stdio.h>
 main()
{
	
	int n,i,ans;
	printf("enter a number:");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	
{
	ans=n%i;
	if(ans==0)
	{
		printf("not a prime number");
		getch();
		
	}
}
}
