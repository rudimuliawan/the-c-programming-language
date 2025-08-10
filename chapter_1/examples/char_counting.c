//
// Created by rudi on 8/10/25.
//

#include <stdio.h>

int main() {
    int c, num_of_char;

    num_of_char = 0;

    while ((c = getchar()) != EOF) {
        num_of_char++;
    }

    printf("Number of character %d\n", num_of_char);
}