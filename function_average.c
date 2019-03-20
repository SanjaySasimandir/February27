/* Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).
Author:Sanjay S
Date:20/03/2019
*/
#include<stdio.h>
float average(int mark_1, int mark_2, int mark_3);
float percentage(int mark_1, int mark_2, int mark_3);
void main()
{
	int mark_1, mark_2, mark_3;
	printf("Enter the mark(out of 100) of first subject: ");
	scanf("%d",&mark_1);
	printf("Enter the mark(out of 100) of second subject: ");
	scanf("%d",&mark_2);
	printf("Enter the mark(out of 100) of third subject: ");
	scanf("%d",&mark_3);
	printf("The average and percentage of marks- %d ,%d, and %d is \n",mark_1, mark_2, mark_3);
	average(mark_1, mark_2, mark_3);
	percentage(mark_1, mark_2, mark_3);
}
float average(int mark_1, int mark_2, int mark_3)
	{
	float average_mark;
	average_mark=(mark_1 + mark_2 + mark_3)/3;
	printf("The Average is %f \n",average_mark);
	}
float percentage(int mark_1, int mark_2, int mark_3)
	{
	float percentage;
	percentage=(mark_1 + mark_2 + mark_3)/3;
	printf("The Percentage is %f \n",percentage);
	}
