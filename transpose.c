/*Program to find transpose of a matrix.
Author: Sanjay S
Date: 3/4/2019
*/
#include<stdio.h>
int transpose(int matrix[4][4]);
void main()
{
	int matrix[4][4],i,j,transpose_matrix[4][4];
	printf("Enter the elements of the 4x4 matrix: ");
	for(i=0;i<4;i++)
		{
		for(j=0;j<4;j++)
			scanf("%d",&matrix[i][j]);
		}
	transpose(matrix);
}
int transpose(int matrix[4][4])
{
	int transpose_matrix[4][4],i,j;
	for(i=0;i<4;i++)
		{
		for(j=0;j<4;j++)
			transpose_matrix[i][j]=matrix[j][i];
		}
	printf("The transpose matrix is : \n");
	for(i=0;i<4;i++)
		{
		for(j=0;j<4;j++)
			printf("%d ",transpose_matrix[i][j]);
		printf("\n");
		}
}	
