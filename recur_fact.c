/* C Program to write a recursive function to obtain the ffactorial of a number.
Author: Sanjay S
Date : 27/03/19
*/
#include<stdio.h>
int factorial(int number);
void main()
{
	int number,fact;
	printf("Enter the number to find fibonacci series: ");
	scanf("%d",&number);
	fact=factorial(number);
	printf("The factorial of %d is %d",number,fact);
}
int factorial(int number)
	{
	int fact=0;
	if(number==0)
		return 1;
	else
		return number*factorial(number-1);
	}
