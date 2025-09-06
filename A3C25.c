#include <stdio.h>
void main()
{
int n, r_n=0, k;
printf("Enter a positive integer : ");
scanf("%d", &n);
  //Create the number which is the reverse of the given number
while(n>0)
{
r=n%10;                                                  //Get the last digit of the number
r_n = (r_n*10) + r;                                      //Multiply last digit of number by 10 for correct place value and add to reversed number     
n=n/10;                                                  //Remove the last digit of the number
}
if(r_n==n)
{
printf("The number %d" is a palindrome", n);
}
else
{
printf("The number %d is not a palindrome", n);
}
}
