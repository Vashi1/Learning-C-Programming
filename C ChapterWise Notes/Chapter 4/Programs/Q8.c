//To calculate factorial using for loop
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int n;
    int f = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
        f *= a;
    printf("The factorial of %d is %d", n, f);
}