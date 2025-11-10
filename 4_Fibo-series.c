#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i, j, count = 0;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%5d", a);
            c = a + b;
            a = b;
            b = c;
            count++;
        }
        printf("\n");
    }
    return 0;
}
