//
// Created by romeo on 18/2/23.
//
#include <stdio.h>
char* cpy(char *destination, char *source){
    char *ptr = destination;
    while (*source != "\0"){
        *destination = *source;
        source++; destination++;
    }
    return ptr;
}
int main(){
    char st[] = "Rakshith";
    char desti[25];
    printf("%s\n", cpy(st, desti));


}