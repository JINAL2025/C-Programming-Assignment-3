#include <stdio.h>
void main()
{
int i, n, d=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
d++;
}
}
if(d==0)
{
printf("The number %d is a prime number", n);
}
else
{
printf("The number %d is not a prime number", n);
}
}
