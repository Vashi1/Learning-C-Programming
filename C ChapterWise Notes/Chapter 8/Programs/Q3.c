//
// Created by romeo on 18/2/23.
//To create strlen
#include <stdio.h>
int main(){
    char st[100];
    puts(st);
    int lent = (sizeof(st) / sizeof(st[0])) - 1;
    printf("the length is %d", lent);
}
