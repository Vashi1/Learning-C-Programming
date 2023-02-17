//
// Created by romeo on 17/2/23.
//
// To determine whether a character entered by user is lowercase or not
#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter the character\n");
    scanf("%c", &a);
    int b = (int)(a);
    if (islower(a)){
        printf("the character is lowercase");
    }
    else{
        printf("The Character is not lowercase");
    }
}