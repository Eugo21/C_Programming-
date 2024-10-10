#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    
    int sum = x + y;

    printf("Anwser is: %d", sum);
    return 0;
}