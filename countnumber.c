/* write c program to count no. of digit in anumber */

#include<stdio.h>
int main()
{
  int n, r, i=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &n);

  while(n > 0)
  {
     n = n / 10;
     i = i+1;  
  }

  printf("\n Number of Digits in a Given Number = %d", i);
  return 0;
}
