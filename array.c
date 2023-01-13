#include<stdio.h>

int main (){
    /*
    // define array 10 integers;
    int this_is_array[10];

    // print how many bytes allocated for this_is_array
    printf("this_is_array have %d bytes\n", sizeof(this_is_array));


    int i = 0;
    for (i; i<10; i++){
        printf("enter array[%d] : ", i);
        scanf("%d", &this_is_array[i]);

    }

    for (int i = 0; i < 10;i++){
        printf("array[%d] = %d\n", i, this_is_array[i]);
            }
    */
    // multidimensional array

    char kata[2][10];

    for (int i =0;i<2;i++){

        for (int j = 0;j < 10;j++){
            //printf("Enter char : ");
            //printf("%d %d\n", i, j);
            scanf("%c", &kata[i][j]);   
        }
    }

    for (int i =0;i<2;i++){

        for (int j = 0;j < 10;j++){
            //printf("Enter char : ");
            //printf("%d %d\n", i, j);
            printf("%c", kata[i][j]);   
        }
    }


}