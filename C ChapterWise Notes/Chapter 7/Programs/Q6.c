//
// Created by romeo on 17/2/23.
//
#include <stdio.h>

void display(int num[3][10]){
    int b = 0;
    while (b < 3){
        for (int a = 0; a < 11; a++){
            printf("%d", num[b][a]);
        }
        b++;
        printf("\n");
    }
}
int main(){
    int num[3][10];
    int a = 0;
    int b = 0;
    for (int c = 1; c < 11; c++){
        num[a][b] = 2 * c;
        b++;
    }
    a++;
    int d = 0;
    for (int c = 1; c < 11; c++){
        num[a][d] = 7 * c;
        d++;
    }
    int e = 0;
    for (int c = 1; c < 11; c++){
        num[a][e] = 9 * c;
        e++;
    }
    display(num);
}