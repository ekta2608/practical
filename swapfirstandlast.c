/*write c program to swap first and last digit of a number*/

// eg : 12345 
//first=1 and end 5 and number=234
//swap= end * 10000 +  number * 10 + first

//5 * 10000 +234 * 10 + 1
// 50000 + 2340 + 1
// 52341



#include <stdio.h>
#include <math.h>
 
int main()
{
  	int Number, FirstDigit, DigitsCount, LastDigit, a, b, SwapNum;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	
  	DigitsCount = log10(Number); 	
  	FirstDigit = Number / pow(10, DigitsCount);
  	
  	LastDigit = Number % 10;
  	
  	a = FirstDigit * (pow(10, DigitsCount));
  	b = Number % a;
  	Number = b / 10;
  	
  	SwapNum = LastDigit * (pow(10, DigitsCount)) + (Number * 10 + FirstDigit);
	    
	printf(" \n The Number after Swapping First Digit and Last Digit =  %d", SwapNum);
 
  	return 0;
}
 

