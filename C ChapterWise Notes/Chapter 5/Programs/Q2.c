//To convert celsius to fahrenheit
// Created by romeo on 17/2/23.
//
#include <stdio.h>
int conv(float cel){
    float fare = (cel * 9)/5 + 32;
    return fare;
}
int main(){
    float c; // temp in celsius
    printf("Enter the temperature in celsius\n");
    scanf("%f", &c);
    float f = conv(c);
    printf("The temperature in fahrenheit is %f", f);
}