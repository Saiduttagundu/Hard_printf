#include <stdio.h>
int main() {
    int h, m, s;
    for(h = 0; h < 24; h++) {
        for(m = 0; m < 60; m++) {
            for(s = 0; s < 60; s++) {
                printf("%02d:%02d:%02d\n", h, m, s);
            }
        }
    }
    return 0;
}
