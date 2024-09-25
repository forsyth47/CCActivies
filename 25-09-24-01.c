//25/09/2024 Program 1

#include <stdio.h>

int main() {
    printf("\n----------------------\n\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j<i; j++) {
            printf("%d", i);
        }
        printf("\n");  
    }
    printf("\n----------------------\n\n");
    for (int i = 6; i > 0; i--) {
        for (int j = 1; j<i; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }
    printf("\n----------------------\n\n");
    for (int i = 6; i > 0; i--) {
        for (int j = 5; j>i-1; j--) {
            printf("%d", j);
        }
        printf("\n"); 
    }
    
    
    printf("\n----------------------\n\n");
    
    return 0;
}
