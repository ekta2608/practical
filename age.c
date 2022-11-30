
/* read age of 15 person and count total baby,school and adult person age */





#include <stdio.h>
int main()
{
	int age;
	int baby=0,school=0,adult=0;
	int i=0;
	
	while(i<15)
	{
		printf("Enter age of person [%d]: ",i+1);
		scanf("%d",&age);
		
		if(age>=0 && age<=5)
			baby++;
		else if(age>=6 && age<=17)
			school++;
		else
			adult++;
		
		//increase counter
		i++;
			
		
	}
	
	printf("\nBaby age: %d\n",baby);
	printf("School age: %d\n",school);
	printf("Adult age: %d\n",adult);
	
	return 0;
}
