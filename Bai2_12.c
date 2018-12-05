// Đặng Lâm San (20170111) 
// Lỗi : thiếu khai báo float y,max;
#include <stdio.h>
#include <conio.h>
main() {
    float x,y, max;
    printf("\n x="); scanf("%f", &x);
    printf("\n y="); scanf("%f", &y);
    if (x>y) {
        max = x; 
    }
    else 
    {
        max =y;
    }
    printf("So lon nhat trong hai so la : %6.2f",max);
    printf("\nDANG LAM SAN 20170111");
    getch();
}