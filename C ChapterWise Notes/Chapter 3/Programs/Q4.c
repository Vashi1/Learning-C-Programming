//
// Created by romeo on 17/2/23.
//
// To find whether a year is a leap year
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year == 2000){
        printf("%d is not a leap year", year);
    }
    else if ((year % 4) == 0){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year");
    }
}