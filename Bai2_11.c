// Đặng Lâm San (20170111) 
// Lỗi : thiếu khai báo float y;
#include <stdio.h>
#include <conio.h>
main() {
    float x,y, min;
    printf("\n x="); scanf("%f", &x);
    printf("\n y="); scanf("%f", &y);
    if (x<y) {
        min = x; 
    }
    else 
    {
        min =y;
    }
    printf("So nho nhat trong hai so la : %6.2f",min);
    printf("\nDANG LAM SAN 20170111");
    getch();
}