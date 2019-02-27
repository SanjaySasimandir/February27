/* Program to find efficiency of a worker.

Author: Sanjay S
Date:27/02/19
*/
#include<stdio.h>
void main()
{
int hours;
printf("Enter the number of work hours: ");
scanf("%d",&hours);
if (hours>=2 && hours<3)
	printf("The worker is highly efficient!");
if (hours>=3 && hours<4)
	printf("The worker is ordered to improve speed.");
if (hours>=4 && hours<=5)
	printf("The worker is given training to improve speed.");
if (hours>5)
	printf("The worker is terminated!.");
printf("\n");
}
