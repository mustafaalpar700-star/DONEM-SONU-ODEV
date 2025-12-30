#include <stdio.h>

#define BOYUT 5

int cozum[BOYUT][BOYUT] = {0};


int gecerliMi(int labirent[BOYUT][BOYUT], int x, int y) {
    return (x >= 0 && x < BOYUT && y >= 0 && y < BOYUT && labirent[x][y] == 1);
}

int labirentCoz(int labirent[BOYUT][BOYUT], int x, int y) {
    
    if (x == BOYUT - 1 && y == BOYUT - 1) {
        cozum[x][y] = 1;
        return 1;
    }

    if (gecerliMi(labirent, x, y)) {
        if (cozum[x][y] == 1) return 0; 
        cozum[x][y] = 1;

        
        if (labirentCoz(labirent, x, y + 1)) return 1;
        
        if (labirentCoz(labirent, x + 1, y)) return 1;
        
        if (labirentCoz(labirent, x, y - 1)) return 1;
        
        if (labirentCoz(labirent, x - 1, y)) return 1;

        cozum[x][y] = 0; 
        return 0;
    }
    return 0;
}

int main() {
    int labirent[BOYUT][BOYUT] = {
        {1, 0, 1, 1, 1},
        {1, 0, 1, 0, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 1, 1, 1},
        {1, 1, 1, 0, 1}
    };

    if (labirentCoz(labirent, 0, 0)) {
        printf("Cikis yolu bulundu:\n");
        for (int i = 0; i < BOYUT; i++) {
            for (int j = 0; j < BOYUT; j++)
                printf("%d ", cozum[i][j]);
            printf("\n");
        }
    } else {
        printf("Yol bulunamadi.\n");
    }

    return 0;
}