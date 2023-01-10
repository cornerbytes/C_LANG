// looping
#include<stdio.h>

// header for boolean operation
#include<stdbool.h>

int main(){
    int i;


    // for loop 
    for (i;i<=10;++i){
        printf("hello %d\n",i);
    }

    // while loop
    int z;
    while(z!=1337){
        printf("enter number\n>");
        scanf("%d", &z);

    }

    // loop with break and continue statement
    puts("enter a number to escape this maze");
    while(1){

        int a;
        printf(">");
        scanf("%d", &a);

        if (a==1337){
            puts("conratulation you enter break statement\n");
            break;
        }
        else if(a==7331){
            puts("your  enter continue statement\n");
            continue;
        }
        else{
            puts("doesnt enter continue statement\n");
        }

        
    }
return 0;
}