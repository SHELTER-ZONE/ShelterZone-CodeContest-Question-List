#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define USE_NORMAL_AREA_SLOVE
/*
 * GCC V5.1.0
 * Shelter Zone Newbie Online Judge Q1
 * Author    : XO
 * Date      : 109.08.21
 */

int main (void) {
	char triangle[] = "    ^     \n\
			      / \    \n\
			     /   \   \n\
			    /     \  \n\
			   /_______\ \n";

	unsigned int height = 0,length = sizeof(triangle),i;
	for(i=0;i<length;i++) {
		if(triangle[i] == '\n')
			height++;
	}
	float side = (2 * height) / sqrt(3);
	// area = sqrt(3) * a^2 / 4
#ifndef USE_NORMAL_AREA_SLOVE
	float area = (sqrt(3) * (side * side)) / 4;
	// area = side *height / 2
	printf("(Use Equilateral Triangle Area) %.3f\n",area);
#else
	float area = (sqrt(3) * (side * side)) / 4;
	printf("(Use Normal Area) %.3f\n",area);
#endif
	return 0;
}
