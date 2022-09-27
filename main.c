#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a;
	int result;
	
	printf("input year :");
	scanf("%i", &a);
	
	result = (a%4 == 0);
	printf("is the year %i the leap year? : %d", a, result);

	return 0;
}
