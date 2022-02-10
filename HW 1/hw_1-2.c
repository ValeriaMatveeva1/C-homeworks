#include <stdio.h>

// 1. Преобразование возраста в годах в кол-во дней
void age_in_days(int age) {
    printf("Your age in years: %d .\nYour age in days: %d.\n", age, age*365);
}

// 2. Общий случай поиска удвоенного числа и квадрата произвольного числа
void toes_values(int toes) {
    printf("toes = %d;\ntoes*2 = %d;\n(toes)^2 = %d.\n", toes, toes*2, toes*toes);
} 

// 3. Перевод роста user'a из сантиметров в дюймы
void to_inches(double height_cm) {
    double height_in = height_cm/2.54;
    printf("Your height in cm: %lf;\nYour height in inches: %lf.\n", height_cm, height_in);
}


int main()
{
    int a; // 1
    printf("Enter your age as integer number: ");
    scanf("%d", &a);
    age_in_days(a);

    int toes = 10; // 2
    toes_values(toes);

    double h_cm; // 3
    printf("Enter your height in cm: ");
    scanf("%lf", &h_cm);
    to_inches(h_cm);


    return 0;
}