#include <stdio.h>

void sum(int n) {
    int num;
    int sum = 0;
    while (n != 0) {
        printf("Enter %d number: ", n);
        scanf("%d", &num);
        sum += num;
        n--;
    }
    printf("%d", sum);
}

int main() {
    int a;
    printf("Enter a number of numbers to sum: ");
    scanf("%d", &a);
    sum(a);
    
    return 0;
}