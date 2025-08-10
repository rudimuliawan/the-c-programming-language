//
// Created by rudi on 8/10/25.
//
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 100
#define STEP 10

int main() {
    double fahr;

    printf("celcius\t\tfahr\n");
    printf("=======\t\t====\n");

    for (int celcius=LOWER; celcius <= UPPER; celcius+=STEP) {
        fahr = ((celcius * 9.0/5.0)) + 32.0;
        printf("%7d\t\t%5.2f\n", celcius, fahr);
    }

    return EXIT_SUCCESS;
}
