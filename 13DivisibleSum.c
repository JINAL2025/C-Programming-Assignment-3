#include <stdio.h>
void main()
{
int i, s=0;
for(i=0;(i<=100)&&(i%13==0);i=i+13)
{
s=s+i;
}
printf("Sum of all no.s divisible by 13 between 1 and 100 is %d", s);
}
