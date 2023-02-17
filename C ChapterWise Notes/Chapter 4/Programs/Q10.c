//To check whether a number is prime or not using for loop
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int n;
    int flag = 0;
    printf("Enter the number(should be greater than 2");
    scanf("%d", &n);
    for (int a = 2; a < (n /2); a++){
        if (n % a == 0){
            flag = 1;
            printf("The number %d is not a prime", n);
            break;
        }
    }
    if (flag == 0){
        printf("The number %d is prime", n);
    }

}