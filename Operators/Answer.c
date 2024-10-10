#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];

    printf("Is 7 equal too 5: ");
    scanf("%s", &a);

    if (strcmp(a, "false") == 0)
    {
        printf("You are correct.\n");
    }
    else if (strcmp(a, "true") == 0)
    {
        printf("You are wrong.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
}