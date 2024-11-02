#include <stdio.h>

int main() {
    
    double hours, parts, charge;

    // Combined prompts into one line
    printf("Type how many hours you worked and the cost of parts (separated by a space): ");
    scanf("%lf %lf", &hours, &parts);
    
    // Calculate the charge
    charge = hours * 100 + parts;

    // Print result based on the charge
    if (charge < 150) {
        printf("Your charge is less than 150: %.2lf\n", charge);
    } else {
        printf("Your total charge is: %.2lf\n", charge);
    }
    
    return 0;
}
