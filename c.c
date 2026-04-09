#include <stdio.h>
int main()
{
    int a = 10, b = 5;

    // Using compund assignment operators
    a += b;                   // Equivalent to a = a+b
    printf("a += b:%d\n", a); // a is now 15

    a -= b;                 // Equivalent to a=a-b
    printf("a-=b:%d\n", a); // a is now 10

    a *= b;
    printf("a*=b:%d\n", a);

    a /= b;
    printf("a/=b:%d\n", a);

    return 0;
}