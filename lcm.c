#include <stdio.h>
int main() {
    int n1, n2, min;
    printf("Input first number:");
    scanf("%d",&n1);
    printf("Input second number:");
    scanf("%d",&n2);
    min = (n1 > n2) ? n1 : n2;

    while (1) {
        if (min % n1 == 0 && min % n2 == 0) {
            printf("The LCM of %d and %d = %d.", n1, n2, min);
            break;
        }
        ++min;
    }
    return 0;
}
