#include <stdio.h>

int length, breadth;

int main(){

    scanf("%d%d", &length, &breadth);

    for(int j = 0; j < breadth; j++){
        printf("+");

        for(int i = 2; (i < length && j == 0) || (i < length && j == breadth - 1); i++)
             printf("+");

        for(int i = 2; (i < length && j != 0 && j != breadth - 1); i++)
             printf(" ");

         printf("+\n");
    }

    return 0;
}