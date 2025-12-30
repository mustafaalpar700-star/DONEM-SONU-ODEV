#include <stdio.h>
#include <string.h>

int main() {
    char mesaj[100];
    int anahtar, i;

    printf("Cozmek istediginiz mesaji girin: ");
    fgets(mesaj, sizeof(mesaj), stdin);
    mesaj[strcspn(mesaj, "\n")] = 0;

    printf("Anahtar degeri girin: ");
    scanf("%d", &anahtar);

    for(i = 0; mesaj[i] != '\0'; ++i) {
        char ch = mesaj[i];

        if(ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - anahtar + 26) % 26 + 'a';
        } else if(ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - anahtar + 26) % 26 + 'A';
        }
        mesaj[i] = ch;
    }

    printf("Cozulmus Mesaj: %s\n", mesaj);
    return 0;
}
 