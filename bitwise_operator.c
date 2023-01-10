// bitwise operators

#include<stdio.h>

int main()
{
    int a = 1337;
    short b = 131;

    // and operator
    printf("%d\n", a&b);

    // or operator
    printf("%d\n", a|b);

    // xor operator
    printf("%d\n", a^b);

    // complement operator
    printf("%d\n", ~b);

    // right shift
    printf("%d\n", a>>2);

    // left shift
    printf("%d\n", a<<2);
    
}