#include <stdio.h>
#include <limits.h>
#include <io.h>
#include <float.h>
#include <malloc.h>

// 1.Суммирование последовательности целых чисел, состоящей из n чисел
void sum(int n) {
    int num;
    int sum = 0;
    while (n != 0) {
        printf("Enter %d number: ", n);
        if (scanf("%d", &num) == 1) {
            sum += num;
            n--;
        } else {
            printf("Not an allowed type!!!\n");
            break;
        }
    }
    printf("%d\n", sum);
}

// 2. Нахождение минимума из последовательности чисел, состоящей из n чисел
void min(int n) {
    int num;
    int res = INT_MAX;
    while (n != 0) {
        printf("Enter %d number: ", n);
        if (scanf("%d", &num) == 1) {
            if (num < res) {
            res = num;
            }
            n--;
        } else {
            printf("Not an allowed type!\n");
            break;
        }
    }
    printf("%d\n", res);
}

// 1.1. Найти сумму и количество элементов посл-ти
void sum_and_count() {
    double num;
    double sum = 0;
    int c = 0;
    int flag = 0;
    while (1) {
        printf("Enter a number to put in sequence: ");
        if (scanf("%lf", &num) == 1) {
            c++;
            sum += num;
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
    printf("Sum of all input numbers = %lf\n", sum);
    printf("Amount of all input numbers: %d\n", c);
}

// 1.2. Выдать 1 встретившееся число, большее k
void more_than_k(double k) {
    for (;;) {
        double a;
        printf("Enter a number: ");
        if (scanf("%lf", &a) == 1) {
            if (a > k) {
            printf("First number > k : %lf\n", a);
            break;
            }
        } else {
            printf("Not an allowed type!\n");
            break;
        }
    }
}

// 1.3. Проверка на возрастание посл-ти
void is_increasing() {
    double num;
    double last = DBL_MIN;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) == 1) {
            if (num > last) {
                last = num;
            } else {
                printf("Your sequence isn't increasing sequence!");
                break;
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!");
                break;
            } else {
                printf("Your sequence is increasing!");
                break;
            }
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
}

// 1.4. Вывести номера эл-тов, меньших своего левого соседа
void less_than_left_neigh() {
    double *a;
    int i;
    int size;
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    a = (double*)malloc(size * sizeof(double)); // Выделение памяти (динамический массив)
    for (i = 0; i<size; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    printf("Indexes of numbers less than it's left neighbour: ");
    for (i = 1; i<size; i++) {
        if (a[i] < a[i-1]) {
            printf("%d ", i);
        }
    }
}

// 1.5. Найти кол-во элементов, расположенных перед первым min эл-том
void before_min() {
    double *a;
    int i;
    double m = DBL_MAX;
    int size;
    int c = 0;
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    a = (double*)malloc(size * sizeof(double)); // Выделение памяти (динамический массив)
    for (i = 0; i<size; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    for (i = 0; i<size; i++) {
        if (a[i] < m) {
            m = a[i];
            c = i;
        }
    }
    printf("Amount of numbers before first minimal: %d", c);
}

// 1.6. В посл-ти целых чисел найти max кол-во четных эл-тов, идущих подряд
void max_even() {
    int num;
    int c = 0;
    int max_even = 0;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num%2 == 0) {
                c++;
            } else {
                if (c > max_even) {
                max_even = c;
                c = 0;
            }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
    if (c > max_even) {
        max_even = c;
        c = 0;
    }
    printf("Max number of even numbers: %d", max_even);
}

// 1.7. Вывести все длины серий подряд идущих четных и нечетных чисел
void lengths_of_even_odd() {
    int num;
    int len_even = 0;
    int len_odd = 0;
    int *len_evens;
    int *len_odds;
    int i_e = 0;
    int i_o = 0;
    int i;
    int flag = 0;
    len_evens = (int*)malloc(20 * sizeof(int));
    len_odds = (int*)malloc(20 * sizeof(int));
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num%2 == 1) {
                len_odd++;
                if (len_even > 0) {
                    len_evens[i_e] = len_even;
                    len_even = 0;
                    i_e++;
                }
            }
            if (num%2 == 0) {
                len_even++;
                if (len_odd > 0) {
                    len_odds[i_o] = len_odd;
                    len_odd = 0;
                    i_o++;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
    if (len_even > 0) {
        len_evens[i_e] = len_even;
        len_even = 0;
        i_e++;
    }
    if (len_odd > 0) {
        len_odds[i_o] = len_odd;
        len_odd = 0;
        i_o++;
    }
    printf("Lengths of even series: ");
    for (i = 0; i < i_e; i++) {
        printf("%d ", len_evens[i]);
    }
    printf("Lengths of odd series: ");
    for (i = 0; i < i_o; i++) {
        printf("%d ", len_odds[i]);
    }
}

/* 1.8. Найти кол-во участков строгого возрастания в посл-ти целых чисел (в этой задаче
я считаю, что 1 число - не последовательность)*/
int amount_increasing() {
    int num;
    int m = INT_MIN;
    int flag = 0;
    int n = 0;
    int c = 0;
    int len = 0;
    int array[10];
    int i = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num > m) {
               m = num;
               n++;
            } else {
                if (n > 1) {
                    c++;
                    array[i] = n;
                    i++;
                    if (num == m) {
                        m = INT_MIN;
                    } else {
                        m = num;
                    }
                    n = 1;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
    }
    if (n > 1) {
        c++;
        array[i] = n;
    }
    printf("Amount of increasing places in sequence: %d\n", c);
    printf("Lengths of increasing places: ");
    for (int j = 0; j < i + 1; j++) {
        printf("%d ", array[j]);
    }
}

/* 1.9. Найти номер эл-та последовательности, с которого начинается самая длинная
подпосл-ть подряд идущих одинаковых чисел, и кол-во эл-тов этой подпосл-ти*/
void more_similar() {
    int i = -1;
    int max_i = 0;
    int c = 0;
    int max_c = 0;
    double num;
    int last;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) == 1) {
            if (max_c == 0) {
                c++;
                max_c = 1;
                last = num;
                i++;
            } else {
                if (num == last) {
                    c++;
                    last = num;
                    i++;
                } else {
                    if (c > max_c) {
                        max_c = c;
                        max_i = i - c + 1;
                    }
                    c = 1;
                    last = num;
                    i++;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
    }
    if (c > max_c) {
        max_c = c;
        max_i = i - c + 1;
    }
    printf("Index of element, beginning the most long sequence of similar numbers: %d\n", max_i);
    printf("Amount of numbers in this sequence: %d", max_c);
}


int main() {
    // int a; // 1
    // printf("Enter a number of numbers to sum: ");
    // if (scanf("%d", &a) == 1) { // проверка на правильность вводимого аргумента
    //     sum(a);
    // } else {
    //     printf("Not an allowed type!\n");
    // }

    // int b; // 2
    // printf("Enter a number of numbers to find a minimum: ");
    // if (scanf("%d", &b) == 1) { // проверка на правильность вводимого аргумента
    //     min(b);
    // } else {
    //     printf("Not an allowed type!\n");
    // }
    
    // sum_and_count(); // 1.1

    // int k = 10; // 1.2
    // more_than_k(k);

    // is_increasing(); // 1.3

    // less_than_left_neigh(); // 1.4

    // before_min(); // 1.5
    // max_even(); // 1.6
    // lengths_of_even_odd(); // 1.7
    // amount_increasing(); // 1.8
    more_similar();


    return 0;
}