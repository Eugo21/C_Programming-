#include <stdio.h>


int main()
{
    int age;
    char name[50], color[20];
    float height;

    printf("whats your name: "); // Checks user age.
    scanf("%s", &name);
    
    printf("How tall are you in meters: ", height); // Checks users height.
    scanf("%f", &height);

    printf("How old are you: ", age); // Checks users age.
    scanf("%d", &age);

    printf("Whats your fav color: ", color);
    scanf("%s", &color);

    return 0;
}