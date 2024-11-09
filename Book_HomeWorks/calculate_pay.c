#include <stdio.h>

int main()
{
    //* Declare variables to store hours worked, hourly rate, regular pay, overtime pay, and gross pay
    double hours, rate, regPay, ovtPay, grossPay;

    //! Prompt user to input the number of hours worked and store it in 'hours'
    printf("How many hours did you work: ");
    scanf("%lf", &hours);

    //*! Prompt user to input the hourly rate of pay and store it in 'rate'
    printf("What is your hourly rate of pay: ");
    scanf("%lf", &rate);

    //* Calculate regular pay and overtime pay based on hours worked
    if (hours <= 40)
    {
        //! If hours worked are 40 or less, all hours are regular hours
        regPay = hours * rate;
        ovtPay = 0;
    }
    else
    {
        //! If hours exceed 40, calculate regular pay for 40 hours and overtime for remaining hours
        regPay = 40 * rate;
        ovtPay = ((hours - 40) * rate * 1.5);  // Overtime pay is 1.5 times the regular rate
    }
    
    //* Calculate gross pay by adding regular and overtime pay
    grossPay = regPay + ovtPay;

    //! Display the results
    printf("Regular pay: $%.2lf\n", regPay);
    printf("Overtime pay: $%.2lf\n", ovtPay);
    printf("Gross pay: $%.2lf\n", grossPay);

    return 0;
}
