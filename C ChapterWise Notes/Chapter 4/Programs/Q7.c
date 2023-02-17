//To calculate the sum of table of 8
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int sum = 0;
    for (int a = 1; a < 11; a++){
        sum += a * 8;
    }
    printf("The required sum is %d", sum);
}