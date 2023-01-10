// calculator

#include<stdio.h>

int menu(){
    short pilihan;
    printf("welcome to simple calc\n");
    printf("1. Add\n2. subtract\n3. multiply\n4. division\n");
    printf("enter your choice :");
    scanf("%hd", &pilihan);
    return pilihan;
}

void get_first_and_second_number(short *a, short *b){

    short testa, testb;
    printf("enter first number : ");
    scanf("%hd", &testa);
    *a = testa;
    printf("enter second number : ");
    scanf("%hd", &testb);
    *b = testb;

}
/*
//this function does not work
short get_user_number(){

    short a , b;
    printf("enter first number : ");
    scanf("%hd", &a);
    printf("enter first number : ");
    scanf("%hd", &b);
    return a, b;
}
*/
int main (){

    int user_pilih;
    user_pilih = menu();

    short a, b;
    get_first_and_second_number(&a, &b);

    if (user_pilih ==1){
        printf("%hd", a+b);
    }
    else if (user_pilih == 2){
        printf("%hd", a-b);
    }
    else if (user_pilih == 3){
        printf("%hd", a*b);
    }
    else if (user_pilih == 4){
        printf("%.2f", (float)a/b);
    }
    else{printf("enter the mode using number!\n");}
    
    return 0;
}