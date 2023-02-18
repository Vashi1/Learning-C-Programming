//
// Created by romeo on 18/2/23.
//
#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "Rakshith";
    char b[9];
    for (int c = 0; c <= strlen(a); c++){
        int d = (int)a[c] + 1;
        b[c] = (char)d;
    }
    printf("%s\n", b);
}