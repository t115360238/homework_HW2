#include <stdio.h>

int main(){

    printf("(A)\n");
    for(int i = 1; i <= 10; i++){
        for(int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(B)\n");
    for(int i = 10; i >= 1; i--){
        for(int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(C)\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < i; j++)
            printf(" ");
        
        for(int k = 0; k < (10 - i); k++)
            printf("*");
        printf("\n");
    }

    printf("\n(D)\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < (10 - i); j++)
            printf(" ");
        
        for(int k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}