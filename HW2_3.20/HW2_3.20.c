#include <stdio.h>

int hours;
double rate;
double salary;

void main(){

    while(1){
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);

        if(hours == -1)
            break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        salary = (hours >= 40) ? 40 * rate + (hours - 40) * rate * 1.5 : hours * rate;
        printf("Salary if $%.2f\n", salary);
    }
    
}