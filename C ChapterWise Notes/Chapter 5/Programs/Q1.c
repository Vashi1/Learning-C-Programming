//To write a function to find the average of three numbers
// Created by romeo on 17/2/23.
//

int avg_num(int a, int b, int c){
    int avg = (a + b + c) / 3;
    return avg;
}
#include <stdio.h>
int main(){
    int n1; int n2; int n3;
    printf("Enter the first number: \n");
    scanf("%d", &n1);
    printf("Enter the second number: \n");
    scanf("%d", &n2);
    printf("Enter the third number: \n");
    scanf("%d", &n3);
    int d = avg_num(n1,n2,n3);
    printf("The average is %d", d);
}