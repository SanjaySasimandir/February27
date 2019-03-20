/*Program to print out all Armstrong numbers between 100 and 500.
Author: Sanjay S
Date: 06-03-2019
*/
#include<stdio.h>
void main()
{
	int number,digit,sum,temp;
	printf("The armstrong numbers between 100 and 500 are: \n");
	for(number=100;number<=500;number++)
		{
		temp=number;
		sum = 0;
		while(temp!=0)
			{
			digit=temp%10;
			temp=temp/10;
			sum=sum+(digit*digit*digit);
			}
		if(sum==number)
			printf("%d ",number);
		}
	printf("\n");
}
