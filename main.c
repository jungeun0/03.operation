#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec;
	int time;
	

	printf("input the second : ");
	scanf("%d", &sec);
	
	printf("the time for %d is %i : %i : %i", sec, sec/3600, (sec%3600)/60, sec%60);
	
	
	
return 0;
}
