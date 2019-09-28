#include <stdio.h>

enum Systems {
    Symbian,
    Embedded_Linux,
    Windows_CE,
    VxWorks,
    QNX
};
struct Square {
    int x0, y0, x1, y1, x2, y2, x3, y3;
};

int getArea(struct Square mySquare) {
    return (mySquare.x0 - mySquare.x1) * (mySquare.x0 - mySquare.x1) +
           (mySquare.y0 - mySquare.y1) * (mySquare.y0 - mySquare.y1);
}

struct state_bits {
    unsigned char ready:1;
    unsigned char toner:1;
    unsigned char drum:1;
    unsigned char paper:1;
};
typedef union printer {
    struct state_bits bits;
    unsigned char state;
};

int main() {
    enum Systems a = Symbian;
    printf("%d\n", a);
    struct Square square1 = {0, 0, 0, 3, 3, 0, 3, 3};
    printf("%d\n", getArea(square1));
    union printer my_printer;
    scanf("%hx", &my_printer.state);
    if (my_printer.bits.ready == 1) {
        printf("Printer is ready\n");
    } else {
        printf("Printer is not ready\n");
    }
    if (my_printer.bits.toner == 1) {
        printf("Printer has enough toner\n");
    } else {
        printf("Printer has not enough toner\n");
    }
    if (my_printer.bits.drum == 1) {
        printf("Printer drum is OK\n");
    } else {
        printf("Printer drum is not OK\n");
    }
    if (my_printer.bits.paper == 1) {
        printf("Printer has enough paper\n");
    } else {
        printf("Printer has not enough paper\n");
    }
    return 0;
}