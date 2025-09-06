#include <stdio.h>
void main()
{
int i, n, s=0;
printf("Enter a positive integer : ");
scanf("%d", &n);
while(n>0)
{
s=s+(n*n*n);
n=n/10;
}
if(s==n)
{
printf("The number %d is an armstong number");
}
else
{
printf("The number %d is not a palindrome ");
}
}
