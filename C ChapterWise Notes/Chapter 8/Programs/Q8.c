//TO count occurance of a character in a string
// Created by romeo on 18/2/23.
//
#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter the string: \n");
    char st[100];
    scanf("%s", &st);
    printf("Enter the character: \n");
    char d = 'a';
    //scanf("%c", &d);
    int flag = 0;
    for (int a = 0; a < strlen(st); a++){
        if (st[a] == d){
            flag++;
        }
    }
    printf("The number of occuracnes is %d", flag);
}