#include <stdio.h>
void main()
{
int i, j, d;
printf("The list of all prime numbers between 1 and 500 is as follows\n");
for(i=1 ; i<=500 ; i++)
{
for(j=1 ; j<=i ; j++)
{
if(i%j==0)
{
d++;
}
} 
if(d==0)
{
printf("%d  ", i);
}
}
}
