#include <stdio.h>
void main()
{
int i, n;
printf("Enter the value of n : ");
scanf("%d", &n);
printf("The first %d odd numbers are as follows : \n");
for(i=1;i<=(2*n)-1;i%2==1)
{
printf("%d\n", i);
i=i+2;
}
}
