/* Program to print inverted half pyramid using *

* * * * *
* * * *
* * * 
* *
*

Author: Sanjay S
Date:27/02/19
*/
#include<stdio.h>
void main()
{
int limit,i,j;
printf("Enter the limit of the half pyramid: ");
scanf("%d",&limit);
for (i=limit;i>=1;i--)
	{
	for(j=i;j>=1;j--)
		printf("* ");
	printf("\n");
	}
}
