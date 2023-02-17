//To calculate nth element of fibonacci series using recursion
// Created by romeo on 17/2/23.
//
#include <stdio.h>

int fib(int n){
    if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (fib(n - 1) + fib(n -2));
    }
}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int a = fib(n);
    printf("The number is %d", a);
}
