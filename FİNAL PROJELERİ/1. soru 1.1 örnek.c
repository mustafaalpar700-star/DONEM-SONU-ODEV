 
 #include <stdio.h>

int main() {
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            
            int v1 = (c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u');
            int v2 = (c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u');

           
            if (v1 != v2) {
                
                printf("%c%c%c\n", c1, c2, c1);
            }
        }
    }
    return 0;
}