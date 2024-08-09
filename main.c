#include <stdio.h>

extern int add(int a, int b);

int main() {
    int result = add(3, 4);
    printf("Result: %d\n", result);
    return 0;
}
