#include <stdio.h>

int main() {
    int sayac = 0;
    char sesli[] = "aeiou";

    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            
        
            int v1 = 0, v2 = 0;
            for(int k=0; k<5; k++) {
                if(i == sesli[k]) v1 = 1;
                if(j == sesli[k]) v2 = 1;
            }

            
            if (v1 != v2) {
                int toplam = i + j + i; 
                
             
                int asal = 1;
                for (int k = 2; k * k <= toplam; k++) {
                    if (toplam % k == 0) asal = 0;
                }

                if (asal) 
                    printf("%d. %c%c%c\n", ++sayac, i, j, i);
            }
        }
    }
    return 0;
}
