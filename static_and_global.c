// static and global;

int testin = 0x1337;
#include<stdio.h>

void testing(){
    printf("%d\n", testin);
}

int main(){

    int testin2;
    testing();
    printf("%d", testin2);
}