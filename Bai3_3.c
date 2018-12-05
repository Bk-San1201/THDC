// Đặng Lâm San (20170111) 
#include <stdio.h>
#include <conio.h>

int main() {
    double X,Y; int i,j;
    printf("Nhap vao 2 so X,Y\n");
    scanf("%lf %lf", &X,&Y);
    double F=0; double temp=1;
    for (i=1;i<=7;i++) {
        for(j=1;j<=6;j++) {
            if (j<i) {
                temp*=Y;
            }
            else {
                temp*=X;
            }
        }
        F += temp;
        temp=1;
    }
    printf("Gia tri cua F=%lf", F);
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
    
}