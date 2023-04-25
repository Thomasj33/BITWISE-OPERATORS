#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, result;
	printf("enter the first number");
	scanf("%d", &num1);
	printf("enter the second number");
	scanf("%d", &num2);
	result= num1 | num2;
	printf("result of OR operation:%d\n", result);
	return 0;
}
