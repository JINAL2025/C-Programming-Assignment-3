#include <stdio.h>
void main()
{
int i, boys=0, girls=0, g[50];
for (i=0;i<50;i++)
{
printf("Enter gender for student %d (1 for Female, 2 for Male): ", i);
scanf(" %d", &g[i]); 
if(g[i]==2)
{
boys++;
}
else 
{
if(g[i]==1)
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
