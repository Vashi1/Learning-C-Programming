//To find the greatest of four numbers entered by the user
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int main(){
    int n1; int n2; int n3; int n4;
    printf("Enter the first number\n");
    scanf("%d", &n1);
    printf("Enter the second number\n");
    scanf("%d", &n2);
    printf("Enter the third number\n");
    scanf("%d", &n3);
    printf("Enter the fourth number\n");
    scanf("%d", &n4);
    int great = n1;
    if (n2 > great){
        great = n2;
    }
    if(n3 > great){
        great = n3;
    }
    if(n4 > great){
        great = n4;
    }
    printf("The greatest number is %d", great);
}