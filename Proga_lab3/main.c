#include <stdio.h>

int main() {
    int okto_number, okto_number_2;
    scanf("%o", &okto_number);
    printf("%x\n", okto_number);
    printf("%o %o\n", okto_number, okto_number<<1);
    printf("%o %o\n", okto_number, okto_number<<1);
    printf("%o %o\n", okto_number, ~okto_number);
    scanf("%o", &okto_number_2);
    printf("%o", okto_number_2&okto_number);
    return 0;
}