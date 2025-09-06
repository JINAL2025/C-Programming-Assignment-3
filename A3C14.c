#include <stdio.h>
void main()
{
printf("Enter 10 integers : ");
int a[10], i, s=0, avg;
for(i=0;i<10;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<10;i++)
{
s=s+a[i];
}
avg=s/10;
printf("The sum and average of the given 10 integers are %d and %d respectively", s, avg);
}
