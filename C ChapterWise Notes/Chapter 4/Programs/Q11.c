//To find prime using while and do while loop
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int num;
    int flag = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    int a = 2;
    do {
        if (num % a == 0){
            flag = 1;
            printf("The number is not a prime\n");
            break;
        }
        a++;
    } while (a <= num / 2);
    if (flag == 0){
        printf("The number is prime\n");
    }
    int a1 = 2;
    int flag1 = 0;
    while (a1 <= num / 2){
        if (num % a1 == 0){
            printf("The number is not prime\n");
            flag1 = 1;
            break;
        }
        a1++;
    }
    if (flag1 == 0){
        printf("The number is prime\n");
    }
}