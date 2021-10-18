#include <stdio.h>
#include "espl_lib.h"

int main() {
    char cont = 'y';
    while (cont == 'y') {
        int in = 0;
        printf("Enter a number\n");
        if (scanf(" %d", &in) != 1) { return 1; }

        char* text = num_to_words(in);
        printf("%s\n", text);

	printf("Do you wish to enter another number? (y/n)\n");
        if (scanf(" %c", &cont) != 1) { return 1; }
    }

    return 0;
}
