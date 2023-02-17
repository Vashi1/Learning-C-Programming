//
// Created by romeo on 17/2/23.
//
void val_change(int a){
    a = 10;
}
#include <stdio.h>
int main(){
    int a = 1;
    val_change(a);
    printf("%d", a);
}