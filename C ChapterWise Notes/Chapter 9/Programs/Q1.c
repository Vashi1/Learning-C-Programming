//
// Created by romeo on 18/2/23.
//
#include <stdio.h>
int main(){
    typedef struct vector victor;
    struct vector{
        int x;
        int y;
    };
    victor v1;
    v1.x = 3;
    v1.y = 4;
    victor v2;
    v2.x = 10;
    v2.y = 100;
}