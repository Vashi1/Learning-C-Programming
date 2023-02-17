//
// Created by romeo on 17/2/23.
//
// To calculate Tax paid by an employee
#include <stdio.h>
int main(){
    float sal;
    float tax;
    printf("Enter the salary\n");
    scanf("%f", &sal);
    if (sal <= 250000){
        tax = 0;
        printf("The tax is %f", tax);
    }
    else if (250000 < sal < 500000){
        tax = 0.05 * sal;
        printf("The tax is %f", tax);
    }
    else if (500000 < sal < 1000000){
        tax = 0.20 * sal;
        printf("The tax is %f", tax);
    }
    else if (sal < 1000000){
        tax = 0.30 * sal;
        printf("The tax is %f", tax);
    }
}