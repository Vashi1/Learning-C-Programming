//
// Created by romeo on 18/2/23.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) calloc(6, sizeof(int));
    ptr[0] = 1;
    printf("%d", ptr[0]);
}