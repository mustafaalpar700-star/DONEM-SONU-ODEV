#include <stdio.h>

int main() {
    int count = 0;
    printf("Gecerli Isimler:\n");

    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            int v1 = (c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u');
            int v2 = (c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u');

            if (v1 != v2) {
                int sum = c1 + c2 + c1;
                
               
                int is_prime = 1;
                if (sum < 2) is_prime = 0;
                for (int i = 2; i * i <= sum; i++) {
                    if (sum % i == 0) {
                        is_prime = 0;
                        break;
                    }
                }

                
                if (is_prime) {
                    count++;
                    printf("%d. %c%c%c (Toplam: %d)\n", count, c1, c2, c1, sum);
                }
            }
        }
    }
    printf("\nSonuc: Toplam %d gecerli isim bulundu.\n", count);
    return 0;
}