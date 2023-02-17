//
// Created by romeo on 17/2/23.
//
#include <stdio.h>
void test(int *j){
    printf("%u\n", j);
}
int main(){
    int i = 1;
    int *j;
    j = &i;
    printf("%u\n", j);
    test(j);
}