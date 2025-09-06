#include <stdio.h>
void main()
{
  int i, l=0, s=0, a[], num;
printf("Enter 100 natural numbers : ");
for(i=0;i<100;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<100;i++)
{
if(a[i]>l)
{
l=a[i];
  }
  if(a[i]<s)
  {
    s=a[i];
  }
}
printf("The smallest number is %d and the largest number is %d", s, l);
}
