#include<stdio.h>

void main()
{
	int mat1[3][3],mat2[3][3];
	int i,j;
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2 Enter Matrix 1 \xB2\xB2\xB2\xB2\xB2\n\n"); /* B2 is for fancy line */
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Index[%d][%d] :",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2 Enter Matrix 2 \xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Index[%d][%d] :",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2 Matrix 1 \xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
						
			printf("%d\t",mat1[i][j]);			
		}
		printf("\n");
	}
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2 Matrix 2 \xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				
			printf("%d\t",mat2[i][j]);			
		}
		printf("\n");
	}
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2 Matrix Addition \xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
					
			printf("%d\t",mat1[i][j]+mat2[i][j]);			
		}
		printf("\n");
	}
	
	
	
}
