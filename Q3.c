//switch code
#include<stdio.h>
int main(){
    int rental_days,total_RC, cars;
    printf("Enter the number of days the car was rented:");
    scanf("%d", &rental_days);
    printf("1. Sedan - $50 per day\n");
    printf("2. SUV - $80 per day\n");
    printf("3. Convertible - $100 per day\n");
    printf("4. Hatchback - $40 per day\n");
    printf("5. Exit\n");
    printf("Select a car that is to be rented :");
    scanf("%d", &cars);
    switch(cars){
        case 1:
        total_RC=rental_days*50;
        break;
        case 2:
        total_RC=rental_days*80;
        break;
        case 3:
        total_RC=rental_days*100;
        break;
        case 4:
        total_RC=rental_days*40;
        break;
        default:
        printf("Invalid input\n");
        break;
    }
    printf("The total rental amount is %d", total_RC);
    return 0;
}
