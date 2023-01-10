// arithmetic operators

#include<stdio.h>

int main(){

    short a = 1337;
    unsigned short b = 7331;
    long double z = b/a;


    // add
    printf("%hd\n", a+b);

    // subtract
    printf("%hd\n", a-b);

    //  multiply
    printf("%d\n", a*b);

    // division
    printf("%Lf\n", z);

    // modulo
    printf("%hd\n", b%a);

}