//To count the number of positive integers in an array
// Created by romeo on 18/2/23.
//
#include <stdio.h>
int counter(int n[]){
    int c = 0;
    for (int a = 0; a < 5; a++){
        if (n[a] >= 0){
            c++;
        }
    }
    return c;
}
int main(){
    int num[5] = {-1, 2, 3, -9, 2};
    int f = counter(num);
    printf("The number of positive integers is %d", f);
}