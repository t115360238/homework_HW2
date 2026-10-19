#include <stdio.h>
#include <math.h>

double amount;

void main(){

    for(double rate = 0.10; rate <= 0.121; rate += 0.005){
        printf("\nrate: %.1f%%\n", rate * 100);
        for(int year = 1; year <= 15; year++){
            amount = 5000.0 * pow(1.0 + rate, year);
            printf("%02d:%.2f\n", year, amount);
        }
    }
}