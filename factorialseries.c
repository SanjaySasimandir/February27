/*Program to add first seven terms of the following series
1/1! + 1/2! + 1/3! + 1/4! +... 
Author:Sanjay S
Date:06/03/19
*/
#include<stdio.h>
void main()
{
  float n=7,sum=0,i,j,fact=1;
  for(i=1;i<=n;i++)
    {
    fact=1;
    for(j=1;j<=i;j++)
      fact*=j;
    sum+=1/fact;
    }
  printf("The sum of 7 terms of the series is %lf",sum);
}
