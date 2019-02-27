/* Program to print half pyramid a using numbers

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Author: Sanjay S
Date:27/02/19
*/
#include<stdio.h>
void main()
{
int limit,i,j;
printf("Enter the limit of the half pyramid: ");
scanf("%d",&limit);
for (i=1;i<=limit;i++)
	{
	for(j=1;j<=i;j++)
		printf("%d ",j);
	printf("\n");
	}
}
