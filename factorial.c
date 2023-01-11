#include<stdio.h>


int factorial(int a){
    long long int b =1;
    
    for(int i = 1;i<=a;i++){
        b *=i;
    }

    return b;
}

int main(){
    short scan;scanf("%d", &scan);
    long long int test = factorial(scan);
    printf("%d", test);
}
