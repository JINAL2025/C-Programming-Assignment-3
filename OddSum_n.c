#include <stdio.h>
void main()
{
int n, i, s=0;
printf("Enter a positive integer : ");
scanf("%d", &n);
for(i=1;(i<=(2*n-1))&&(i%2==1);i=i+2)
{
s=s+i;
}
printf("Sum of first %d odd numbers is %d", n, s);
}
