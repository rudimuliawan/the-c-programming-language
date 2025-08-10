//
// Created by rudi on 8/11/25.
//

#include <stdio.h>
#include <stdlib.h>

#define OUT 0
#define IN 1

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == SPACE || c == TAB || c == NEWLINE) {
            if (state == IN) {
                putchar(' ');
            }

            state = OUT;
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }

    return EXIT_SUCCESS;
}