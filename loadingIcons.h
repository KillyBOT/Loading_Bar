#ifndef LOADINGICONS_H
#define LOADINGICONS_H

void clearScreen();

char* load_plain(double percent, int precision);
char* load_bar(double percent, int barLength);
char* wait_circle(int frame);
char* wait_dots(int frame, int dotNum);
char* wait_bar(int frame, int totalBarLength, int subBarLength);
char* wait_bar_bounce(int frame, int barLength);

#endif