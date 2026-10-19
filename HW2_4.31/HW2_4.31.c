#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i = -4, k = -8; i <= 4; i++, k += 2){
        for(int j = 0; j < abs(i); j++)
            printf(" ");

        for(int l = 0; l < (9 - abs(k)); l++)
            printf("*");

        printf("\n");
    }

    return 0;
}