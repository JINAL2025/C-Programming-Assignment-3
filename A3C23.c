#include <stdio.h>
void main()
{
int n, s=0;
printf("Enter a positive integer : ");
scanf("%d", &n);
while(n>0)
{
s=s+n;
n=n/10;
}
printf("The sum of the digits in %d is %d", n, s);
}
