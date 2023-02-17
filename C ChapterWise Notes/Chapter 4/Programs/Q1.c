//To print multiplication table
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);
    for (int a = 1; a < 11; a++){
        printf("%d * %d = %d\n", n, a, n * a);
    }
}