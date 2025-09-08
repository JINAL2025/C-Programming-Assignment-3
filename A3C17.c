#include <stdio.h>
void main()
{
  int a[200], i, p=0, n=0, z=0;
printf("Enter 200 integers: ");
for(i=0;i<200;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<200;i++)
{
if(a[i]>0)
{ p++; }
else
{
if(a[i]<0)
{ n++; }
else
{ z++; }
}
}
printf("The number of positive & negative numbers and zeroes among the given numbers are %d, %d and %d respectively", p, n, z);
}
