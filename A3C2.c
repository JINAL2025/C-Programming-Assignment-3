#include <stdio.h>
void main()
{
int i;
for(i=1;i<20;i%2==1)
{
printf("%d\n", i);
i=i+2;
}
}
