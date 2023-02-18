//To check whether a character is present or not
// Created by romeo on 18/2/23.
//
#include <stdio.h>
int main(){
    char st[] = "rakthi";
    char c;
    int flag = 0;
    scanf("%c", &c);
    for (int a = 0; a < (sizeof(st)/sizeof(st[0])); a++){
        if (st[a] == c){
            flag = 1;
        }
    }
    if (flag == 1){
        printf("Badhai ho");
    }
}