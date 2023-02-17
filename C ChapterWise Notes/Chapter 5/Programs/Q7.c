//
// Created by romeo on 17/2/23.
//

#include <stdio.h>
void star(){
    for (int i = 1; i <= 5; i = i + 2){
        int a = 0;
        while(a < i){
            printf("*");
            a++;
        }
        printf("\n");
    }
}
int main(){
    star();
    return 0;
}