#include <stdio.h>
void main()
{
int i, n, f=1;
printf("Enter an integer : ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d! = %d", n, f);
}
