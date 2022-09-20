#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A starship's system shall be 64b based.
long get_time() {
    return (unsigned long)time(NULL);
}

char *get_time_str() {
    char *tstr = (char*)malloc(13 * sizeof(char));
    sprintf(tstr, "%lu ", get_time());
    return tstr;
}