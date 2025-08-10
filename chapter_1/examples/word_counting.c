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
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == NEWLINE) {
            ++nl;
        }

        if (c == SPACE || c == TAB || c == NEWLINE) {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return EXIT_SUCCESS;
}