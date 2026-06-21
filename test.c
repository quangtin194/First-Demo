#include <stdio.h>
#include <conio.h>

int a, b;
int main() {
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    int sum = a + b;
    printf("Tong la: %d", sum);
    return 0;
}