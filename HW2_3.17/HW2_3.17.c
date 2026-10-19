#include <stdio.h>

int account = 0;
double balance;
double charges;
double credits;
double limit;
double new_balance;

int main(){

    while(1){
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);

        if(account == -1)
            break;

        printf("Enter beginning balance: ");
        scanf("%lf", &balance);

        printf("Enter total charges: ");
        scanf("%lf", &charges);

        printf("Enter total credits:");
        scanf("%lf", &credits);

        printf("Enter credit limit: ");
        scanf("%lf", &limit);

        new_balance = balance + charges - credits;

        if(new_balance > limit){
            printf("Account:\t%d\n", account);
            printf("Credit limit:\t%.2f\n", limit);
            printf("Balance:\t%.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }
    }

    return 0;
}