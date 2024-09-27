#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the numbers: \n");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2; //Adds the 2 numbers.
    int difference = num1 - num2; // Minuses the 2 numbers.
    int product = num1 * num2; //Multiplies the 2 numbers.
    float quotient = (float)num1 / num2; //Divides the 2 numbers.

    printf("Answer:%d\n", sum); // prints sum.
    printf("Answer:%d\n", difference); // prints the differents.
    printf("Answer:%d\n", product); // prints the product.
    printf("Answer:%f\n", quotient); // prints the quotient.
}