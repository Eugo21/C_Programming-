#include <stdio.h>



int main()
{
    int pay, hours, rate;

    printf("How many hours did you work: ");
    scanf("%d", &hours);

    printf("What is your hourly rate: ");
    scanf("%d", &rate);

    if (hours <= 40)
    {
        pay = hours * rate;
        printf("Your pay is: %d\n", pay);
    }
    else
    {
        pay = (40 * rate) + ((hours - 40) * (rate * 1.5));
        printf("Your pay is: %d\n", pay);
    }
    
    
}