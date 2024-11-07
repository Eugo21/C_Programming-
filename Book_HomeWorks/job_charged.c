#include <stdio.h>

int main() {
    
    double hours, parts, charge;

    // Combined prompts into one line
    printf("How my hours did you work?: ");
    scanf("%lf", &hours);

    printf("Costs of the parts?: ");
    scanf("%lf", &parts);
    
    // Calculate the charge
    charge = hours * 100 + parts;

    // Print result based on the charge
    if (charge < 150) {
        printf("Your charge is less than 150: %.2lf\n", charge);
    } else {
        printf("Your total charge is: $%.2lf\n", charge);
    }
    
    return 0;
}
