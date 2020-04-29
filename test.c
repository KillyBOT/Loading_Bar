#include "loadingIcons.h"
#include <stdio.h>
#include <unistd.h>

int main(){
	double d = 0;
	double dd = 0.1;
	for(d = 0; d <= 1; d+=dd){
		clearScreen();
		printf("Real value of d:%f\n", d);
		printf("%s\n", load_plain(d,4));
		printf("%s\n", load_bar(d,12));
		sleep(1);
	}
}