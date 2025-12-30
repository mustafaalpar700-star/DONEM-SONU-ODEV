#include <stdio.h>

int main() {
    int n, sayac = 1;
    
    printf("Bir tam sayi girin: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", sayac++);
        }
        printf("\n");
    }

    return 0;
}