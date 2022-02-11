#include <stdio.h>
#include <limits.h>

// 1.Суммирование последовательности целыхь чисел, состоящей из n чисел
void sum(int n) {
    int num;
    int sum = 0;
    while (n != 0) {
        printf("Enter %d number: ", n);
        scanf("%d", &num);
        sum += num;
        n--;
    }
    printf("%d\n", sum);
}

// 2. Нахождение минимума из последовательности чисел, состоящей из n чисел
void min(int n) {
    int num;
    int res = INT_MAX;
    while (n != 0) {
        printf("Enter %d number: ", n);
        scanf("%d", &num);
        if (num < res) {
            res = num;
        }
        n--;
    }
    printf("%d", res);
}

int main() {
    int a; // 1
    printf("Enter a number of numbers to sum: ");
    if (scanf("%d", &a) == 1) { // проверка на правильность вводимого аргумента
        sum(a);
    } else {
        printf("Not an allowed type!\n");
    }

    int b; // 2
    printf("Enter a number of numbers to find a minimum: ");
    if (scanf("%d", &b) == 1) { // проверка на правильность вводимого аргумента
        min(b);
    } else {
        printf("Not an allowed type!\n");
    }
    

    return 0;
}