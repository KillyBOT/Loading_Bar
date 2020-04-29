#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loadingIcons.h"

void clearScreen(){
	//This might not work on every system, but it works for me on Linux!
	printf("\e[1;1H\e[2J");
}

char* load_plain(double percent, int precision){
	char* str = malloc(5 + precision);
	sprintf(str, "%.*f%%",precision,percent*100);
	return str;
}
char* load_bar(double percent, int barLength){
	char* str = malloc(barLength+1);
	double step = 1.0 / (barLength - 2);
	double total = step;
	str[0] = '[';
	str[barLength] = '\0';

	for(int n = 0; n < barLength-2; n++){
		//printf("%f %d\n", total, percent >= total);

		//I added the .99999999 precision because I couldn't be bothered. 
		//I don't know if there's a better solution
		if(percent >= total) str[1+n] = '#';
		else str[1+n] = ' ';
		total += step;
	}
	str[barLength - 1] = ']';

	return str;
}
char* wait_circle(int frame){
	char* str = malloc(2);

	str[1] = '\0';

	switch(frame%4){
		case 0:
		str[0] = '|';
		break;
		case 1:
		str[0] = '/';
		break;
		case 2:
		str[0] = '-';
		break;
		case 3:
		str[0] = '\\';
		break;
		default:
		break;
	}

	return str;
}
char* wait_dots(int frame, int dotNum);
char* wait_bar(int frame, int totalBarLength, int subBarLength);
char* wait_bar_bounce(int frame, int totalBarLength, int subBarLength);