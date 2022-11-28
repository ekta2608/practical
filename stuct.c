/*struct [structure_name]  
{  
    type member_1;  
    type member_2;  
    . . .   
    type member_n;  
}; */

#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 variable for structure    
int main( )    
{    
   //store first employee information    
   e1.id=1107;    
   strcpy(e1.name, "ekta kathad");//copying string into char array    
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
return 0;  
}    
