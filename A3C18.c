#include <stdio.h>
void main()
{
  int t, i, boys=0, girls=0, g;
printf("Enter the total number of students in the class : ");
scanf("%d", &t);
for (i=1;i<=t;i++)
{
printf("Enter gender for student %d (1 for Female, 2 for Male): ", i);
scanf(" %d", &g); 
if(g==2)
{
boys++;
}
else 
{
if(g==1)
{
girls++;
}
else
{
printf("Invalid input. Please enter M or F.\n");
i--;
}
}
}
printf("\nThe number of boys and of girls in the class is %d and %d respectively", boys, girls);
}
