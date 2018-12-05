// ĐẶng Lâm San 20170111
#include <stdio.h>
#include <conio.h>
int main() {
    double X,Y;
    printf("Nhap vao 2 so thuc\n");
    scanf("%lf %lf", &X, &Y);
    printf("X^2+y^2=%lf", X*X+Y*Y);
    printf("\n(X+Y)^2=%lf", (X+Y)*(X+Y));
    printf("\n(X-Y)^2=%lf", (X-Y)*(X-Y));
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
}