#include <stdio.h>

// Рассчеm среднего арифметического пяти целых значений, введенных с клавиатуры.
void average_of_five_nums(int a, int b, int c, int d, int e) {
    printf("The average of these numbers : %lf .\n", (a + b + c + d + e) / 5.0);
}

// Определитель четности/нечетности числа, введенного с клавиатуры.
void odd_or_even(int num) {
    if (num % 2 == 0) {
    printf("%d is even.\n", num);
    } else {
    printf("%d is odd.\n", num);
    }
}

// Вычисление суммы чисел от 1 до числа, введенного пользователем
void sum_to_num(int num) {
    int i = 1, sum = 0;
    while (i < num + 1) {
    sum += i;
    i++;
    }
    printf("The sum of integers from 1 to %d : %d . \n", num, sum);
}


//Рассчет x в степени y с помощью оператора while
void x_in_power_of_y(int x, int y) {
    int res = 1;
    int pow = y;
    while (y != 0) {
    res *= x;
    y--;
    }
    printf("%d to the %d power: %d .\n", x, pow, res);
}

int main() {
    int a, b, c, d,e;
    printf("Enter 5 numbers : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average_of_five_nums(a, b, c, d, e);

    int k;
    printf("Enter an integer number : ");
    scanf("%d", &k);
    odd_or_even(k);

    int n;
    printf("Enter an integer number : ");
    scanf("%d", &n);
    sum_to_num(n);

    int i, j;
    printf("Enter 2 numbers (and i'll give you x^y) : ");
    scanf("%d %d", &i, &j);
    x_in_power_of_y(i, j);


    return 0;
}