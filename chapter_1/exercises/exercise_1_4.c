//
// Created by rudi on 8/10/25.
//
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 100
#define STEP 10

int main() {
    double fahr, celcius;

    printf("celcius\tfahr\n");
    printf("=======\t====\n");

    celcius = LOWER;
    while (celcius <= UPPER) {
        fahr = ((celcius * 9.0/5.0)) + 32.0;
        printf("%8.2f\t%5.2f\n", celcius, fahr);
        celcius += STEP;
    }

    return EXIT_SUCCESS;
}
