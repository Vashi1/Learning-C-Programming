//To print the address of a variable
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int a = 9;
    int *j;
    j = &a;
    printf("%u\n", j);
    printf("%d\n", *j);
}