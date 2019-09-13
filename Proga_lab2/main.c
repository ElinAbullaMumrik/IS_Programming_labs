#include <stdio.h>
#include <Math.h>

int main() {
    printf("Hello, World!\n");
    double z1, z2;
    printf("Insert a");
    double a;
    scanf("%lf", &a);
    z1=pow((1+a+a*a)/(2*a+a*a)+2-((1-a+a*a)/(2*a-a*a)),(-1))*(5-2*a*a);
    z2=(4-a*a)/2;
    printf("%lf\n%lf\n", z1, z2);
    return 0;
}