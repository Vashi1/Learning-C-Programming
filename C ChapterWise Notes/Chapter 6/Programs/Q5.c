//
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int i = 1;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf("%d", *(*k));
}