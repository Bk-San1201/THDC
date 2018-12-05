// Đặng Lâm San 20170111    
#include <stdio.h>
#include <conio.h>
int main() {
    int a,b,c;
    printf("Nhap vao 3 so\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Tong=%d", a+b+c);
    printf("\nTich=%d", a*b*c);
    float x=a+b+c;
    printf("\ntrung binh=%6.2f", x/3);
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
}