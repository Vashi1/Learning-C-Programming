//TO find whether a student is pass or fail
#include <stdio.h>

int main(){
	int mark1; int mark2; int mark3;
	printf("Enter the marks in first subject:\n");
	scanf("%d", &mark1);
	printf("Enter the marks in second subject:\n");			
	scanf("%d", &mark2);
	printf("Enter the marks in third subject:\n");		
	scanf("%d", &mark3);
	if ((mark1 < 33) || (mark2 < 33) || (mark3 < 33)){
		printf("The student is Failed");
	}
    else if (((mark1 + mark2 + mark3) / 3) < 40){
        printf("The Student is Failed");
    }
    else{
    printf("The Student is Passed");
    }
	}
