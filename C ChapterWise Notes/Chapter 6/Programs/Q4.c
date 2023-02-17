//To calculate sum and average of two numbers using pointers
// Created by romeo on 17/2/23.
//
#include <stdio.h>
void sum_avg(int *a, int *b){
    int temp1 = *a;
    int temp2 = *b;
    int sum = temp1 + temp2;
    float avg = sum / 2;
    printf("Sum is %d and average is %f", sum, avg);
    int c = *a + *b;
}
int main(){
    int a = 2;
    int b = 3;
    int *j1;
    int *j2;
    j1 = &a;
    j2 = &b;
    sum_avg(j1, j2);
}