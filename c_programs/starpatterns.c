#include <stdio.h>

// Pattern 1: Right-Angled Triangle
void pattern1(int rows) {
    printf("Pattern 1: Right-Angled Triangle\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Pattern 2: Inverted Right-Angled Triangle
void pattern2(int rows) {
    printf("\nPattern 2: Inverted Right-Angled Triangle\n");
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Pattern 3: Square
void pattern3(int rows) {
    printf("\nPattern 3: Square\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Pattern 4: Pyramid
void pattern4(int rows) {
    printf("\nPattern 4: Pyramid\n");
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
}

//Pattern 5: Hollow Square
void pattern5(int rows){
    printf("\nPattern 5: Hollow Square\n");
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            if(i == 1 || i == rows || j == 1 || j == rows){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows = 5; // Number of rows for the patterns

    pattern1(rows);
    pattern2(rows);
    pattern3(rows);
    pattern4(rows);
    pattern5(rows);

    return 0;
}