/*Program to add n terms of the following series 

1/1! + 1/2! + 1/3! + 1/4! + ...+1/n!
Author: Sanjay S
Date:06/03/2019
*/
#include<stdio.h>
void main()
{
  int n=5;
  float sum=0,factorial,i,j;
  for(i=1;i<=n;i+=1)
    {
    factorial=1;
    for(j=1;j<=i;j+=1)
      factorial*=1/j;
      printf("%1f %1f %1f \n",i,j,factorial);
    sum+=(factorial);
    }
  printf("%lf",sum);
}
