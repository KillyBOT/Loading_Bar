#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loadingIcons.h"

void clearScreen(){
	//This might not work on every system, but it works for me on Linux!
	printf("\e[1;1H\e[2J");
}

char* load_plain(double percent, int precision){
	char* str = malloc(sizeof(char) * (5 + precision));
	sprintf(str, "%.*f%%",precision,percent*100);
	return str;
}
char* load_bar(double percent, int barLength){
	char* str = malloc(sizeof(char) * (barLength+1));
	double step = 1 / ((double)(barLength - 2));
	double total = step;
	str[0] = '[';
	str[barLength] = '\0';

	for(int n = 0; n < barLength-2; n++){
		printf("%f %d\n", total, percent>=1);
		if(percent >= total || (int)percent == 1) str[1+n] = 'X';
		else str[1+n] = ' ';
		total += step;
	}
	str[barLength - 1] = ']';

	return str;
}
char* wait_circle(int frame);
char* wait_dots(int frame, int dotNum);
char* wait_bar(int frame, int totalBarLength, int subBarLength);