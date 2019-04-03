/*Program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.
Author: Sanjay S
Date: 3/4/2019
*/
#include<stdio.h>
int search(int array[], int number);
void main()
{
	int array[25],number,i,count;
	printf("Enter the array elements: ");
	for(i=0;i<25;i++)
		scanf("%d",&array[i]);
	printf("Enter the number to search: ");
		scanf("%d",&number);
	search(array,number);
}
int search(int array[], int number)
	{
	int i,count=0;
	for(i=0;i<25;i++)
			{
			if (array[i]==number)
				count+=1;
			}
		if (count==0)
			printf("The number %d doesnot occur in the array",number);
		else
			printf("The number %d appears %d times in the array.",number,count);
	}
