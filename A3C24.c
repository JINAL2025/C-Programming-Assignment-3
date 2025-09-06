#include <stdio.h>
void main()
{
int n, r_n=0, k;
printf("Enter a positive integer : ");
scanf("%d", &n);
while(n>0)
{
r=n%10;                                                  //Get the last digit of the number
r_n = (r_n*10) + r;                                      //Multiply last digit of number by 10 for correct place value and add to reversed number     
n=n/10;                                                  //Remove the last digit of the number
}
printf("The reversed number is %d", r_n);
}
