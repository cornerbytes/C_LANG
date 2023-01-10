#include<stdio.h>

int main(){
    extern int a;
    printf("%d", sizeof(a));
}