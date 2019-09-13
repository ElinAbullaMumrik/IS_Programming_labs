#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    long int number, number_2;
    scanf("%ld", &number);
    printf("%ld\n", (number>=-50&&number<=50));
    scanf("%lx", &number_2);
    printf("%ld\n", ((number_2&262144))>>18);
    return 0;
}