//
// Created by romeo on 18/2/23.
//

#include <stdio.h>
typedef struct vector victor;
struct vector{
    int x;
    int y;
};
void sumVector(victor v1, victor v2){
    int a = v1.x + v2.x;
    int b = v1.y + v2.y;
    printf("x = %d, y = %d", a,b);
}
int main(){

    victor v1;
    v1.x = 3;
    v1.y = 4;
    victor v2;
    v2.x = 10;
    v2.y = 100;
    sumVector(v1, v2);
}