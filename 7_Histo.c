#include <stdio.h>
int main() {
    int i, j;
    int values[5] = {3, 7, 5, 9, 6};
    printf("Histogram:\n");
    for(i = 0; i < 5; i++) {
        printf("%2d | ", i+1);
        for(j = 0; j < values[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
