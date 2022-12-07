#include <stdio.h>
int main()
{
	int choice=-1;
	printf("\n 1.Pizza price = 180rs/pcs"
		"\n 2.Burger price = 100rs/pcs"
			"\n 3.Dosa price = 120rs/pcs"
				"\n 4.Idli price = 50rs/pcs");
				
while(1){
	printf("\n\n\nplease enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("you have selected pizza ");
		
	}
	else if(choice==2)
	 {
	 	printf("you have selected burger ");
	 	
	 }
	 else if(choice==3)
	 {
	 	printf("you have selected Dosa ");
	 	
	 }
	 else if(choice==4)
	 {
	 	printf("you have selected Idli ");
	 	
	 }
	 break;
	 
	
}
}

