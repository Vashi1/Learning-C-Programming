//
// Created by romeo on 19/2/23.
//
#include <stdlib.h>
#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);

    printf("G" );
    fclose(ptr);


}