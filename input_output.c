// input output

#include<stdio.h>

int main()
{
    int test;
    printf("enter a number : ");
    scanf("%d", &test);
    printf("your number = %d\n", test);

    printf("convert to char = %c\n", test);

    printf("multiple input : \n");

    int aja;
    float siap;
    scanf("%d%f", &aja, &siap);
    printf("%d %f", aja, siap);
    

    return 0;
}