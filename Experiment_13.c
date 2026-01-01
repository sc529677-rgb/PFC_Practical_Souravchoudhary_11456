#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            printf("Continue:%d\n", i);
            continue; 
        }
        if (i == 7) {
            printf("Break:%d", i);
            break;
        }
    }
    return 0;
}
