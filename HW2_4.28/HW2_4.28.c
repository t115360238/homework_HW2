#include <stdio.h>

int pay_code;
int hour;
int pieces;
double salary;
double wage;
double sales;
double rate;


int main(){

    while(1){
        printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Piece, -1 to end): ");
        scanf("%d", &pay_code);

        if(pay_code == -1)
            break;

        switch(pay_code){
            case 1:
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                printf("Manager's pay is $%.2f\n", salary);
                break;

            case 2:
                printf("Enter hourly wage: ");
                scanf("%lf", &wage);
                printf("Enter hours worked: ");
                scanf("%d", &hour);
                printf("Hourly worker's pay is $%.2f\n", hour <= 40 ? hour * wage : 40 * wage + (hour - 40) * wage * 1.5);
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                printf("Commission worker's pay is $%.2f\n", 250.0 + 0.057 * sales);
                break;

            case 4:
                printf("Enter amount per piece: ");
                scanf("%lf", &rate);
                printf("Enter number of pieces produced: ");
                scanf("%d", &pieces);
                printf("Pieceworker's pay is $%.2f\n", rate * pieces);
                break;

            default:
                printf("Invalid paycode.\n");
                break;
        }
    }

    return 0;
}