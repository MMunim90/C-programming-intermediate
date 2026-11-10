#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

extern int errno;

int main() {

    // There are more than a hundred error codes.
    for(int x = 0; x < 135; x++){
        fprintf(stderr, "%d: %s\n", x, strerror(x));
    }

    return 0;
}