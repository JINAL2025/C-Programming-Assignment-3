#include <stdio.h>
void main()
{
int n, s=0;
printf("Enter an integer : ");
scanf("%d", &n);
while(n>0)
{
s=s+n;
n=n/10;
}
printf("The sum of the digits in %d is %d", n, s);
}
