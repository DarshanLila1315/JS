#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        int c = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);  
        }
        printf("\n");
    }
}
