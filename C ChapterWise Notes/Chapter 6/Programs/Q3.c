//To change value of a variable
// Created by romeo on 17/2/23.
//
void val_change(int *a){
    *a = 10;
}
#include <stdio.h>
int main(){
    int a = 1;
    int *j;
    j = &a;
    val_change(j);
    printf("%d", a);
}