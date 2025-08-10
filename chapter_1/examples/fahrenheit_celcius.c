//
// Created by rudi on 8/9/25.
//

#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int celcius, fahr;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr += STEP;
    }

    return EXIT_SUCCESS;
}
