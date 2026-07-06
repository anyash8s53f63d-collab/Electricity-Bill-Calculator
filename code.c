#include <stdio.h>

int main()
{
 char name[50]; int units; float bill;

printf("Enter Customer Name: ");
scanf("%s", name);

printf("Enter Electricity Units Used: ");
scanf("%d", &units);

if(units <= 100)
    bill = units * 3;       

else if(units <= 300)
    bill = (100 * 3) + (units - 100) * 5; 
else
    bill = (100 * 3) + (200 * 5) + (units - 300) * 7;

printf("\n----- Electricity Bill -----\n");
printf("Customer Name : %s\n", name);
printf("Units Used    : %d\n", units);
printf("Total Bill    : Rs. %.2f\n", bill);

return 0;
}