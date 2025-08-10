//
// Created by rudi on 8/10/25.
//
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int fahr, celcius;

    printf("Fahr\t celcius\n");
    printf("====\t =======\n");
    fahr = LOWER;
    while (fahr <= UPPER) {
        celcius = 5 * (fahr-32) / 9;
        printf("%4d\t%8d\n", fahr, celcius);
        fahr += STEP;
    }

    return EXIT_SUCCESS;
}