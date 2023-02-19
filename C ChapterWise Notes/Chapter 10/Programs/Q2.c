//
// Created by romeo on 19/2/23.
//To write multiplication of a given number in a file
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n; // number to be entered by the user
    printf("Enter the number\n");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("test.txt", "w");
    for (int a = 1; a < 11; a++){
        fprintf(ptr, "%st", printf("%d x %d = %d", n, a, n*a));
    }
    fclose(ptr);
}

