#include <stdio.h>

int main(){
	int len;
	int bre;
	printf("Enter the length of the rectangle: \n");
	scanf("%d", &len);

	printf("Enter the breadth of the rectangle: \n");
	scanf("%d", &bre);

	int area = len * bre;
	printf("The area of the rectangle is: %d", area);
	return 0;
}


