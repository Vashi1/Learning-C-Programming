//
// Created by romeo on 18/2/23.
//To decrypt
#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "Rakshith";
    char b[9];
    for (int c = 0; c <= strlen(a); c++){
        int d = (int)a[c] + 1;
        b[c] = (char)d;
    }
    char f[9];
    for (int t = 0; t <= strlen(b); t++){
        int u = (int)b[t] - 1;
        f[t] = (char)u;
    }
    printf("%s", f);
}