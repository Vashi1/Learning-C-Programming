//To calculate sum of first 10 natural numbers using for and do while loops
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int sum = 0;
    int sum1 = 0;
    for (int a = 1; a < 11; a++){
        sum += a;
    }
    printf("The sum using for loop is %d\n", sum);

    int a1 = 1;
    do {
        sum1 += a1;
        a1++;
    }
    while (a1 < 11);
    printf("The sum using do while loop is %d\n", sum1);

}