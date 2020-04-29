#include "loadingIcons.h"
#include <stdio.h>
#include <unistd.h>

int main(){
	double d = 0;
	double dd = 1.0/24.0;
	int f = 0;
	for(d = 0; d < 1; d+=dd){
		clearScreen();
		printf("Real value of d:%f\n", d);
		printf("%s\n", load_plain(d,0));
		printf("%s\n", load_bar(d,15));
		printf("%s\n", wait_circle(f,24));
		f++;
		usleep(1000000/24);
	}
}