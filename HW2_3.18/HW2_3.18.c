#include <stdio.h>

double sales;
double salary;

int main(){

    while(1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);

        if(sales == -1)
            break;

        salary = 200.0 + 0.09 * sales;
        printf("Salary if: $%.2f\n\n", salary);
    }
    
    return 0;
}