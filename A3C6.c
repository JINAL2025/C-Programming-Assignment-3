#include <stdio.h>
void main()
{
int i, n;
printf("Enter the value of n : ");
scanf("%d", &n);
printf("The first %d even numbers are as follows : \n");
for(i=2;i<=2*n;i%2==0)
{
printf("%d\n", i);
i=i+2;
}
}