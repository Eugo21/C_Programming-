#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int user;

    printf("Temperature Converter:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &user);

    if (user == 1)
    {
        printf("Enter temperature in celsius: ");
        scanf("%f", &celsius);                                 // Culculates and turns celsius into fahrenheit.
        fahrenheit = (celsius * 9/5) + 32;
        printf("celsius in Fahrenheit: %.2f\n", fahrenheit);
    }
    else if (user == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);                             // Culculates and turns fahrenheit into celsius.
        celsius = (fahrenheit - 32) * 5/9;
        printf("fahrenheit in Celsius: %.2f\n", celsius);
    }
    else {
        printf("Invalid choice\n");                           // Prints Invalid.
    }
    return 0;
}