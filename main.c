#include <stdio.h>
#include "zhah.h"

int main() {
    printf("Please watch into zhah and complete todos\n");

    uint64_t res = zhah_hash("Hello, World! Im to cool to be ligma im sigma");
    uint64_t res2 = zhah_hash("Hello, World! Im to cool to be ligma im sigma");
    if (res == res2) {
        printf("Hashes are equal\n");
    } else {
        printf("Hashes are not equal\n");
    }

    printf("1: %llu\n", res);
    printf("2: %llu\n", res2);
    return 0;
}
