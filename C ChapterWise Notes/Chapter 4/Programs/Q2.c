//To print multiplication table in reversed order
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);
    for (int a = 10; a >0; a--){
        printf("%d * %d = %d\n", n, a, n * a);
    }
}