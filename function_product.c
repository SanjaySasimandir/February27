/* Function which receives a float and an int from main( ), finds the product of these two and returns the product which is printed through main( )
Author:Sanjay S
Date:20/03/2019
*/
#include<stdio.h>
float product(int number_a,float number_b);
void main()
{
	int number_a;
	float number_b, product1;
	printf("Enter integer number A : \n");
	scanf("%d",&number_a);
	printf("Enter float number B : \n");
	scanf("%f",&number_b);
	product1=product(number_a,number_b);
	printf("The product of %d and %f is : %f ",number_a, number_b,product1);
}
float product(int number_a,float number_b)
	{
	float prod;
	prod=(number_a*number_b);
	return prod;
	}
