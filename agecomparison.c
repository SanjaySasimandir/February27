/* If ages of Ram, Shyam and Ajay are input through the keyboard. Write a programme to determine the youngest of the three.

Author: Sanjay S
Date:27/02/19
*/
#include<stdio.h>
void main()
{
int ram_age,shyam_age,ajay_age;
printf("Enter the age of Ram: ");
scanf("%d",&ram_age);
printf("Enter the age of Shyam: ");
scanf("%d",&shyam_age);
printf("Enter the age of Ajay: ");
scanf("%d",&ajay_age);
if (ram_age<shyam_age && ram_age<ajay_age)
	printf("Ram is younger than Shyam and Ajay");
if (shyam_age<ram_age && shyam_age<ajay_age)
	printf("Shyam is younger than Ram and Ajay");
if (ajay_age<ram_age && ajay_age<shyam_age)
	printf("Ajay is younger than Ram and Shyam");
printf("\n");
}
