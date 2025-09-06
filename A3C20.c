#include <stdio.h>
void main()
{
int i, s=0;
for(i=1;i<=100;i++)
{
if(i%3==0)
{
s=s+i;
}
}
printf("The sum of all integers between 1 and 100 which are divisible by 3 is %d", s);
}
