#include <stdio.h>

double principal;
double rate;
double interest;
int day;

void main(){

    while(1){
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);

        if(principal == -1)
            break;

        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in day: ");
        scanf("%d", &day);

        interest = principal * rate * day / 365;

        printf("The interest charge is $%.2f\n", interest);
    }
    
}