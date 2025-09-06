#include <stdio.h>
void main()
{
int i, n, s=0;
printf("Enter a natural number : ");
scanf("%d", &n);
for(i=1;i<=(n/2);i++)
{
if(n%i==0)
{
s=s+i;
}
}
if(s==n)
{
printf("The number %d is a perfect number", n);
}
else
{
printf("The number %d is not a perfect number", n);
}
}
