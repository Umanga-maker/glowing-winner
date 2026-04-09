#include <stdio.h>
int main()
{
    int a = 6, b = 3;
    printf("a=%d,b=%d\n", a, b);
    // Bitwise AND
    printf("a & b=%d\n", a & b);
    // Bitwise OR
    printf("a | b = %d\n", a | b);
    // Bitwise XOR
    printf("a^b=%d\n", a ^ b);
    // Bitwise NOT
    printf("~a=%d\n", ~a);
    // Left Shift
    printf("a << 1 =%d\n", a << 1);
    // Right Shift
    printf("a >> 1= %d\n", a >> 1);
}
