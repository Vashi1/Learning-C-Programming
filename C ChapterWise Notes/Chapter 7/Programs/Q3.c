//
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int arr[10];
    int *ptr;
    ptr = arr;
    for (int a = 1; a <= 10; a++){
        *ptr = 5 * a;
        ptr += 1;
    }
    int *ptr1;
    ptr1 = arr;
    for (int a = 0; a < 10; a++){
        printf("%d\n", arr[a]);
    }
}