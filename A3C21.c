#include <stdio.h>
void main()
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if(n==0)
{
printf("Digits of the number : 0\n");
}
if(n<0)
{
n=-n;                                                           // Handle negative numbers by taking absolute value
printf("Note: Processing the absolute value of the number\n");
}
printf("Digits of the number (from right to left) are \n");
while (n>0)
{
int digit=n%10;                                                 // Extracting the last digit
printf("%d\n", digit);
n=n/10;                                                         // Removing the last digit
}
}
