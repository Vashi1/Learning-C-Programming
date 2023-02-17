//TWF to calculate force of attraction on a body of mass m
// Created by romeo on 17/2/23.
//
#include <stdio.h>
float att(float mas){
    float force = mas * 9.8;
    return force;
}
int main(){
    float m;
    printf("Enter the mass of body\n");
    scanf("%f", &m);
    float f = att(m);
    printf("The force of attraction is %.2f", f);
}