#include <stdio.h>
#define PI 3.14159
int globalVar = 100;
int add(int, int);
void printMessage();
int main()
{
    int num1 = 5, num2 = 15;
    int result = add(num1, num2);
    printf("Sum: %d\n", result);

    printMessage();

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

void printMessage()
{
    printf("This is a user-defined function.\n");
}
