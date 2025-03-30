// calculating annual interest and total balance after interest using ternary operator
#include<stdio.h>
int main(){
    float balance,annualI,interestA,totalB;
    printf("Enter customer's account balance:");
    scanf("%f", &balance);
    annualI = (balance>=50000)?(balance*0.05):(balance*0.03);
    printf("%f", annualI);
    annualI = (balance<50000 && balance>=20000)?(balance*0.03):(balance*0.02);
    printf("%f", annualI);
    annualI = (balance<20000)?(balance*0.02):(balance*0.01);
    printf("The total interest amount is :%f\n", annualI);
    totalB = annualI+balance ;
    printf("Total balance after interest is %f\n", totalB);
    return 0;
}
