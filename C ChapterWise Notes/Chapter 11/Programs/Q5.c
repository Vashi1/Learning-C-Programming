//
// Created by romeo on 18/2/23.
//
#include <stdlib.h>
#include <stdio.h>
int main(){
    int *ptr;
    ptr = malloc(sizeof(int));
    realloc(ptr, 30 * sizeof (int ));
}