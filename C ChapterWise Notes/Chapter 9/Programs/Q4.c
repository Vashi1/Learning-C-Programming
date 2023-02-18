//
// Created by romeo on 18/2/23.
//

#include <stdio.h>
typedef struct vector victor;
struct vector{
    int x;
    int y;
};

int main(){

    victor v1;
    v1.x = 3;
    v1.y = 4;
    victor v2;
    v2.x = 10;
    v2.y = 100;
    victor *ptr;
    ptr = &v1;
    printf("%d", ptr ->x);
}