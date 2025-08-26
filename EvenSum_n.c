#include <stdio.h>
void main()
{
int n, i, s=0;
printf("Enter a positive integer : ");
scanf("%d", &n);
for(i=2;(i<=(2*n))&&(i%2==0);i=i+2)
{
s=s+i;
}
printf("Sum of first %d even numbers is %d", n, s);
}
