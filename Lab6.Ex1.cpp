#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n = 3, m = 4;
    int A[3][4];
    int choice;

    do {
        printf("\n=== МЕНЮ ===\n");
        printf("1. Ввести матрицю та знайти максимум\n");
        printf("2. Завершити роботу\n");
        printf("Ваш вибiр: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Введення матриці
            printf("Введiть елементи матрицi розмiром 3x4:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("A[%d][%d] = ", i, j);
                    scanf("%d", &A[i][j]);
                }
            }

            // Координати
            int i1 = 1, j1 = 1;
            int i2 = 2, j2 = 3;

            // Витяг значень
            int val1 = A[i1][j1];
            int val2 = A[i2][j2];
            int max = (val1 > val2) ? val1 : val2;

            printf("Максимальне значення мiж A[%d][%d] = %d та A[%d][%d] = %d — це %d.\n",
                i1, j1, val1, i2, j2, val2, max);
        }
        else if (choice == 2) {
            printf("Завершення роботи програми.\n");
        }
        else {
            printf("Невiрний вибiр! Спробуйте ще раз.\n");
        }

    } while (choice != 2);

    return 0;
}