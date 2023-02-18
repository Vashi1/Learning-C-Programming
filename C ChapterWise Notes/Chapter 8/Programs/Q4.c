//TO slice a string
// Created by romeo on 18/2/23.
//
#include <stdio.h>
#include <string.h>
void slice(char *st[], int m, int n ){
    char s[40];
    for (int a = m; a <= n; a++){
        strcat(s, (const char *) *st[a]);
    }
}
int main(){
    char st[] = "Rakshith";
    int m; int n;
    printf("Enter n\n");
    scanf("%d", &m);
    printf("Enter n\n");
    scanf("%d", &n);
    char **a;
    a = &st;
    slice(a, m, n);
    printf("%s", st);
}