//
// Created by romeo on 17/2/23.
//To create array of 10 numbers
#include <stdio.h>
int main(){
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int *a;
    a = num;
    a += 2;
    printf("%u", *a);

}

