#include <stdio.h>

int main()
{
    unsigned int a = 7, b = 3; // declare two unsigned integers a and b
    unsigned int result;

    // perform bitwise AND operation
    result = a & b;
    printf("a & b = %u\n", result);

    // perform bitwise OR operation
    result = a | b;
    printf("a | b = %u\n", result);

    // perform bitwise XOR operation
    result = a ^ b;
    printf("a ^ b = %u\n", result);

    // perform bitwise NOT operation
    result = ~a;
    printf("~a = %u\n", result);

    // perform left shift operation
    result = a << 1;
    printf("a << 1 = %u\n", result);

    // perform right shift operation
    result = a >> 1;
    printf("a >> 1 = %u\n", result);

    return 0;
}
