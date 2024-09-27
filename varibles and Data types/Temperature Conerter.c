#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int user;

    if (user == 1)
    {
        printf("Enter temperature in celsius: \n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    }
    else if (user == 2)
    {
        printf("Enter temperature in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    }
    else {
        printf("Invalid choice\n");
    }
    return 0;
}