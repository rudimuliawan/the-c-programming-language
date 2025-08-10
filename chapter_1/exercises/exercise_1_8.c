//
// Created by rudi on 8/10/25.
//

#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
    int c, num_of_blanks, num_of_tabs, num_of_lines;

    num_of_blanks = 0;
    num_of_tabs = 0;
    num_of_lines = 0;

    while ((c = getchar()) != EOF) {
        if (c == SPACE) {
            num_of_blanks++;
        }
        else if (c == TAB) {
            num_of_tabs++;
        }
        else if (c == NEWLINE) {
            num_of_lines++;
        }
    }

    printf("Num of Blanks : %d\n", num_of_blanks);
    printf("Num of Tabs : %d\n", num_of_tabs);
    printf("Num of Lines : %d\n", num_of_lines);

    return EXIT_SUCCESS;
}
