#include <stdio.h>
int main() {
    int day, date = 1;
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    for(day = 1; day < 6; day++) printf("    "); // November 1 is Saturday
    for(date = 1; date <= 30; date++) {
        printf("%4d", date);
        if((date + 5) % 7 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}
