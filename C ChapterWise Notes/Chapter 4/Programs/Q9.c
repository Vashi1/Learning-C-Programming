//TO find factorial of a number using while loop
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main() {
    int n;
    int f = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    int a = 1;
    while (a <= n){
        f *= a;
        a++;
    }
    printf("The factorial of %d is %d", n, f);
}