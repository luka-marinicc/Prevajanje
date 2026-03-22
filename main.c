#include <stdio.h>

int add(int a, int b);

#define PI 3.14

int main()
{
    printf("PI = %2f\n", PI);
    int result = add(3, 4);
    printf("Result: %d\n", result);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}