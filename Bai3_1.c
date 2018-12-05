// Đặng Lâm San (20170111)
#include <stdio.h>
#include <conio.h>
#include <math.h>
double Abs(double x) {
    if (x<0) return -x;
    else return x;
}
int main() {
    double x,y,z;
    printf("Nhap vao 3 so thuc bat ky\n");
    scanf("%lf %lf %lf", &x,&y,&z);
    double F;
    F = (x+y+z)/(x*x+y*y+1)-Abs(x-z*cos(y));
    printf("Gia tri cua F =%lf",F);
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
}