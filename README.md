# Electricity-Bill-Calculator
Language: C    What is project: Calculates electricity bill based on unit consumption using slab-wise conditional logic.    Key Concepts Used: If-Else Ladder, Arithmetic Calculations, Input/Output.

#include <stdio.h>

int main() {
    char name[50];
    int units;
    float bill;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Electricity Units Used: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 3;         // Rs.3 per unit
    else if(units <= 300)
        bill = (100 * 3) + (units - 100) * 5;  // Next units Rs.5 each
    else
        bill = (100 * 3) + (200 * 5) + (units - 300) * 7; // Above Rs.7 per unit

    printf("\n----- Electricity Bill -----\n");
    printf("Customer Name : %s\n", name);
    printf("Units Used    : %d\n", units);
    printf("Total Bill    : Rs. %.2f\n", bill);

    return 0;
}
