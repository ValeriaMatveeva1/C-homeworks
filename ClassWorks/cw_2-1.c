#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Программа для подсчета пробелов и знаков табуляции.
void count_spaces(char* s)
{
    int c_spaces = 0;
    int c_tabs = 0;
    int c_nlines = 0;
    while (*s!='\0')
    {
        if (*s == ' ')
        {
            c_spaces++;
            s++;
        } else if (*s == '\t')
        {
            c_tabs++;
            s++;
        } else if (*s == '\n')
        {
            c_nlines++;
            s++;
        } else
        {
            s++;
        }
    }
    printf("There are %d signs of spaces and %d signs of tabulation. Also you have %d new-lines.\n", c_spaces, c_tabs, c_nlines);
}

// Программа для вывода строки по одному слову.
void input_chars(char* s)
{
    while (*s != '\0')
    {
        if (*s != ' ')
        {
            printf("%c", *s);
            s++;
        } else 
        {
            printf("\n");
            s++;
        }
    }
    printf("\n");
}

//Программа для вывода гистограммы длин переданной строки.
void histogramm(char* s)
{
    int c = 0;
    while (*s != '\0')
    {
       if (*s != ' ')
        {
            c++;
            s++;
        } else 
        {
            while (c != 0)
            {
                printf("=");
                c--;
            }
            printf("\n");
            c = 0;
            s++;
        }
    }
    while (c != 0)
    {
        printf("#");
        c--;
    }
}

// Программа для вывода всех слов строки, имеющих длину более 80 символов.
void input80(char* s)
{
    if (strlen(s) > 80)
    {
        while (*s != '\0')
        {
            printf("%c", *s);
            s++;
        }
        printf("\n");
    } else 
    {
        printf("Your string has less than 80 symbols!\n");
    }
}

// Программа для переписывания строкового аргумента в обратном порядке.
void reverse(char* s)
{
    int len = strlen(s);
    char myString[len];
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        if (*s == '\0')
        {
            break;
        }
        myString[i] = *s;
        s++;
    }
    for (i = 0; i < len; i++)
    {
        printf("%c", myString[i]);
    }
}

int main()
{
    // count_spaces("fhvgdvhg     gnfkj \t \n f,ngb \t dzfbmgkjkd \t  \n  ");
    // input_chars("Romeo and Juliet is a tragedy written by William Shakespeare early in his career about two young Italian star-crossed lovers whose deaths ultimately reconcile their feuding families.");
    // input80("Romeo and Juliet is a tragedy written by William Shakespeare early in his career about two young Italian star-crossed lovers whose deaths ultimately reconcile their feuding families.");
    // input80("dgjkfvn");
    // reverse("Valeria");
    histogramm("The furnace repairman indicated the heating system was acting as an air conditioner.");
}