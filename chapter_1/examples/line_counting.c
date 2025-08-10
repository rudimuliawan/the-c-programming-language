//
// Created by rudi on 8/10/25.
//

#include <stdio.h>
#include <stdlib.h>

#define NEWLINE '\n'

int main() {
    int c, num_of_line;

    num_of_line = 0;

    while ((c = getchar()) != EOF) {
        if (c == NEWLINE) {
            num_of_line++;
        }
    }

    printf("Number of lines : %d\n", num_of_line);

    return EXIT_SUCCESS;
}