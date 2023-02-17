//To sum first 10 natural numbers
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int sum = 0;
    int n = 1;
    while (n < 11){
        sum += n;
        n++;
    }
    printf("The sum of first n natural numners is %d", sum);
}