#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	int sum, sub;
	
	printf("input intergers :");
	scanf("%i %i", &x, &y);
	
	sum = x + y;
	sub = x - y;
	
	printf("+ operation : %i\n", sum);
	printf("- operation : %i\n", sub);
	printf("* operation : %i\n", x*y);
	
	
	
	
	
	return 0;
}
