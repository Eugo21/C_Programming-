#include <stdio.h>

/* is given 3 test. each marked out of 100. student pass if its eqaul or greater than 50.

fails if is less than 50 */

int main()
{
    int test1, test2, test3;

    printf("Enter the marks obtained in the first test: ");
    scanf("%d", &test1);

    printf("Enter the marks obtained in the second test: ");
    scanf("%d", &test2);

    printf("Enter the marks obtained in the third test: ");
    scanf("%d", &test3);

    int average = (test1 + test2 + test3) / 3;

    if (average >= 50)
    {
        printf("Student passed with an average of %d.\n", average);
    }
    else
    {
        printf("Student failed with an average of %d.\n", average);
    }

    return 0;
}