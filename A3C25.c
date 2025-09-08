#include <stdio.h>
void main()
{
int n, k, r_n=0,;
printf("Enter a positive integer : ");
scanf("%d", &n);
  //Create the number which is the reverse of the given number
while(n>0)
{
k=n%10;                                                  //Get the last digit of the number
r_n = (r_n*10) + k;                                      //Multiply last digit of number by 10 for correct place value and add to reversed number     
n=n/10;                                                  //Remove the last digit of the number
}
if(r_n==n)
{
printf("The number %d is a palindrome", n);
}
else
{
printf("The number %d is not a palindrome", n);
}
}
