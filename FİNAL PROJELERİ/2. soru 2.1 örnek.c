#include <stdio.h>


int ucgenSayisi(int n) {
    if (n <= 1) return n;
    return n + ucgenSayisi(n - 1);
}

int main() {
    int N = 5; 
    printf("N=%d ucgen sayilar= ", N);
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", ucgenSayisi(i));
    }
    printf("\n");
    
    return 0;
}