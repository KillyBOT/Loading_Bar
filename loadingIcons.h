#ifndef LOADINGICONS_H
#define LOADINGICONS_H

void clearScreen();

char* load_plain(double percent, int precision);
char* load_bar(double percent, int barLength);
char* wait_circle(int frame, int frameTotal);
char* wait_dots(int frame, int frameTotal, int dotNum);
char* wait_bar(int frame, int frameTotal, int totalBarLength, int subBarLength);
char* wait_bar_bounce(int frame, int frameTotal, int totalBarLength, int subBarLength);

#endif