//
// Created by romeo on 19/2/23.
//
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num = rand();
    int in;
    int counter = 0;
    while (1){
        printf("Enter the number: \n");
        scanf("%d", &in);
        if (in > num){
            printf("Lower number please\n");
        }
        else if (in < num){
            printf("Guess is too low, Higher number please\n");
        }
        else if( in == num){
            printf("Correct number. Number of tries taken %d", counter);
            break;
        }
        counter++;
    }
}