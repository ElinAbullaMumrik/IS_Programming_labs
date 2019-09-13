#include <stdio.h>
void lab1_2(){
    int integer;
    printf("Please, input an integer number\n");
    scanf ("%d", &integer);
    printf("Your number is\n");
    printf("%d", integer);
}
void lab1_3(){
    float real;
    printf("Please, input a real number\n");
    scanf ("%f", &real);
    printf("Your number is\n");
    printf("%f", real);
}
void lab1_4() {
    char character;
    printf("Please, input a character\n");
    scanf(" %c", &character);
    printf("Your character is\n");
    printf("%c\n", character);
}
int main() {
    printf("Hello, World!\n");
    int x;
    printf("Laboratory work No. 1. Input and output by the console. What do you want to enter? \n 1. Integer \n 2. Real number \n 3. Character");
    scanf("%d", &x);
    switch (x) {
        case 1:
            lab1_2();
            break;
        case 2:
            lab1_3();
            break;
        case 3:
            lab1_4();
            break;
    }
    return 0;
}

