
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int n, sum = 0, count = 0;

    printf("Введите количество элементов массива: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Ошибка! Размер массива должен быть положительным.\n");
        return 1;
    }

    int a[100];

    if (n > 100) {
        printf("Максимальный размер массива — 100.\n");
        return 1;
    }

    printf("Введите элементы массива:\n");

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);

        if (a[i] != 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("Среднее арифметическое ненулевых элементов: %.2f\n", average);
    }
    else {
        printf("В массиве нет ненулевых элементов.\n");
    }

    return 0;
}
