/* C Program to write a recursive function to obtain the first 25 numbers of a Fibonacci sequence.
Author: Sanjay S
Date : 27/03/19
*/
#include<stdio.h>
int fibonacci(int limit);
void main()
{
	int limit=25,i;
	printf("The first %d numbers of a Fibonacci sequence are: \n",limit);
	for(i=1;i<=limit;i++)
		printf("%d ",fibonacci(i));
}
int fibonacci(int limit)
	{
	if (limit==1)
		return 0;
	if (limit==2)
		return 1;
	else
		return fibonacci(limit-1)+ fibonacci(limit-2);
	
	}
	
	
