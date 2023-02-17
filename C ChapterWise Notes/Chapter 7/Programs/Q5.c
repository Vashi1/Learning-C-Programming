//
// Created by romeo on 17/2/23.
//
#include <stdio.h>
void reverse(int a[]){

}
int main(){
 int num[] ={1, 2, 4, 5, 6};
 int temp;
    for(int i = 0; i < sizeof(num)/2;i++){
        temp = num[i];
        num[i] = num[sizeof(num) - i - 1];
        num[sizeof(num) - i - 1] = temp;
    }
 return 0;

}