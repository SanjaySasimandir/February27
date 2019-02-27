/* Program to print 24 hours of a day with suitable suffixes like AM, PM , Noon and Midnight.

Author: Sanjay S
Date:27/02/19
*/
#include<stdio.h>
void main()
{
int hour;
printf("12 Midnight");
printf("\n");
for (hour=1;hour<12;hour++)
	{
	printf("%d AM",hour);
	printf("\n");
	}
printf("12 Noon");
printf("\n");
for (hour=1;hour<12;hour++)
	{
	printf("%d PM",hour);
	printf("\n");
	}
}
