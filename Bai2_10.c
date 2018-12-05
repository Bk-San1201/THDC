// Đặng Lâm San (20170111)
#include <stdio.h>
#include <conio.h>

main() {
    float a,b,max;
    printf("\n a="); scanf("%f",&a);
    printf("\n b="); scanf("%f",&b);
    max=a;
    if (max<b) 
        max=b;
    printf("So lon nhat tron hai so la : %6.2f",max);
    printf("\nDANG LAM SAN 20170111");
    getch();
}