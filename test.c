#include "stdio.h"

int main() {
    printf("EOF: %d\n", EOF);
    if (getchar() != EOF) {
        printf("%s\n", "ineq");
    } else {
        printf("%s\n", "eq");
    }
    return 0;
}