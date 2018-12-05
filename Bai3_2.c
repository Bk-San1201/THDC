// Đặng Lâm San 
#include <stdio.h>
#include <conio.h>
#define PI 3.141599265
int main() {
    double r,M,S;
    printf("Nhap vao ban kinh\n");
    scanf("%lf",&r);
    M=2.0*PI*r;
    S=PI*r*r;
    printf("Chu vi hinh tron M=%lf",M);
    printf("\nDien tich hinh tron S=%f", S);
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
}