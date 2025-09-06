#include <stdio.h>
void main()
{
int n, d;
printf("Enter an integer : ");
scanf("%d", &n);
while(n>0)
{
d++;
n=n/10;
}
printf("The total number of digits in %d is %d", n, d);
}
