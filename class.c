#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 5;
    int max;

    // Nested conditional operator
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The maximum value is :%d\n", max);

    return 0;
}