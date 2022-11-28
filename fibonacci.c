#include<stdio.h>
main()
{
	int f=0,s=1,next,i,no;
	printf("enter number of term:");
	scanf("%d",&no);
	printf("first %d term of fibonacci series", no);
	
	for(i=0;i<=no;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		
		else
		{
			next=f+s;
			f=s;
			s=next;
			
		}
		
		printf("%d",next);
		
		
	}
	
}
