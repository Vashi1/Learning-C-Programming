//To calculate the sum of first n natural numbers using recursion
// Created by romeo on 17/2/23.
//
#include <stdio.h>

int sum(int n){
    if (n != 0){
        return n + sum(n - 1);
    }
    else{
        return n;
    }
}
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int c = sum(n);
    printf("The sum is %d", c);
}