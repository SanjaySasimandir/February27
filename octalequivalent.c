/*Program to receive an integer and find its octal equivalent..
Author: Sanjay S
Date: 06-03-2019
*/
#include<stdio.h>
void main()
{
	int number,digit,sum=0,equivalent=0,copy,i;
	printf("Enter the number: ");
	scanf("%d",&number);
	copy=number;
	i=1;
	while(number>0)
		{
		digit=number%8;
		sum=sum+digit*i;
		number=number/8;
		i=i*10;
		}
	
	printf("The octal equivalent of %d is %d \n",copy,sum);
}
