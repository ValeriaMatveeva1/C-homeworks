#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>


// Функция distance, которая вычисляет расстояние между двумя точками с координатами (x1, y1) и (x2, y2).
double distance(double p1[2], double p2[2])
{
    return sqrt(pow(p1[0]-p2[0], 2) + pow(p1[1]-p2[1], 2));
}

// Функция gcd, которая возвращает наибольший общий делитель (НОД) двух целых чисел.
int gcd(int a, int b)
{
   while (a!=0 && b!=0)
   {
       if (a>b)
       {
           a = a%b;
       } else {
           b = b%a;
       }
   } 
   printf("%d", a+b);
   return a+b;
}

// Напишите функцию, которая получает целое значение и возвращает число с обращенным порядком цифр.
int inverse(int n)
{
    int num = 0;
    while (n != 0)
    {
        num = num*10 + n%10;
        n = n/10;
    }
    return num;
}

// Напишите функцию, которая определяет, является ли число простым, т.е. делится только на 1 и на само себя.
int is_prime(int n)
{
    int i = 2;
    while (i != n)
    {
        if (n % i == 0)
        {
          return 0; 
        }
        i++;
    }
    return 1;
}

// Напишите функцию, которая возвращает наименьшее из трех чисел с плавающей точкой.
double min_from_3_double(double a, double b, double c)
{
    double min = 0;
    if (a<b)
    {
        min = a;
    }
    else 
    {
        min = b;
    }
    if (c<min)
    {
        min = c;
    }
    printf("%lf", min);
    return min;
}

// Визуализация рекурсии с использованием функции вычисления факториала.
int c = 0; // Приходится заводить глобальную переменную, чтобы выводить шаги корректно
int factorial(int n){
    c++;
    if (n>=0)
    {
        if (n>1) 
        {
            int fac = n*factorial(n-1);
            c--;
            printf("%d number of function call, value: %d\n", c, fac);
            return fac;
        } 
        else 
        {
            return 1;
        }
    }
    else
    {
        return -1;
    }
}

// Функция, получающая на вход адрес начала строки и возвращающая кол-во пробелов в строке
int get_spaces(char* s)
{
    int c = 0;
    while (*s!='\0')
    {
        if (*s == ' ')
        {
            c++;
            s++;
        } else {
            s++;
        }
    }
    return c;
}


int main()
{
    factorial(4);
    return 0;
}
